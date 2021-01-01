# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase sonnet-native"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

require sonnet_metainfo.inc
inherit cmake_kf5
inherit reuse_license_checksums

EXTRA_OECMAKE_append_class-native += " -DSONNET_USE_WIDGETS=OFF"
EXTRA_OECMAKE_append_class-target += " -DPARSETRIGRAMS_EXECUTABLE=${STAGING_DIR_NATIVE}/${bindir}/parsetrigrams"

FILES_${PN} += " \
    ${datadir}/kf5/sonnet/* \
"
