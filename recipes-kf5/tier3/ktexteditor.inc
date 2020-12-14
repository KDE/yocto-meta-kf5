# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018-2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KTextEditor"
HOMEPAGE = "https://api.kde.org/frameworks/ktexteditor/html/index.html"
LICENSE = "LGPL-2.0"
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
    ksyntaxhighlighting \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums

do_compile_prepend() {
    # desktoptojson needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
}

FILES_${PN} += " \
  ${libdir}/plugins/kf5/parts/katepart.so \
  ${datadir}/katepart5/script/README.md \
"
