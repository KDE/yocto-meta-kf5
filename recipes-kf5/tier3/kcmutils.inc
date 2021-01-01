# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018-2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    qtbase \
    libxml2-native \
    kitemviews \
    kconfigwidgets \
    kconfig-native \
    kauth-native \
    kcoreaddons \
    kcoreaddons-native \
    kiconthemes \
    kservice \
    kxmlgui \
    kdeclarative \
    kpackage \
    kpackage-native \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

require kcmutils_metainfo.inc
inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums
