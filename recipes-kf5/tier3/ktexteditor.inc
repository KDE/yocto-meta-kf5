# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018-2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020-2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "MIT & BSD-2-Clause & LGPL-2.0"
PR = "r0"

DEPENDS = " \
    libxml2-native \
    qtbase \
    karchive \
    kconfig \
    kconfig-native \
    kguiaddons \
    kio \
    kcoreaddons-native \
    kauth-native \
    kparts \
    sonnet \
    kiconthemes \
    syntax-highlighting \
"

require ktexteditor_metainfo.inc
inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums

# crosscompile support for kcoreaddons_desktop_to_json
EXTRA_OECMAKE += " \
    -DKSERVICETYPE_PATH_kpart.desktop=${STAGING_DATADIR} \
    -DCMAKE_SYSROOT=${RECIPE_SYSROOT} \
"

FILES:${PN} += " \
    ${libdir}/plugins/kf5/parts/katepart.so \
    ${datadir}/katepart5/script/README.md \
"
