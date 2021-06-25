# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "MIT & LGPL-2.0+"
PR = "r0"

# licenses only contained in autotests
REUSE_LICENSECHECK_WHITELIST = "LGPL-2.1-or-later GPL-2.0-only"

DEPENDS = " \
    qtbase \
    ${BPN}-native \
"

require syntax-highlighting_metainfo.inc
inherit cmake_kf5
inherit perlnative
inherit reuse_license_checksums

EXTRA_OECMAKE_class-native += " -DKSYNTAXHIGHLIGHTING_USE_GUI=OFF"
EXTRA_OECMAKE_class-target += " -DKATEHIGHLIGHTINGINDEXER_EXECUTABLE=${STAGING_DIR_NATIVE}/${bindir}/katehighlightingindexer"

sysroot_stage_all_append_class-native () {
    mkdir -p ${SYSROOT_DESTDIR}/${bindir}
    cp ${B}/bin/katehighlightingindexer ${SYSROOT_DESTDIR}/${bindir}
}
