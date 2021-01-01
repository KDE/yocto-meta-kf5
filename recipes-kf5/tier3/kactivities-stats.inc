# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kconfig \
    kactivities \
    kcoreaddons-native \
    kconfig-native \
    kauth-native \
    boost \
"

SRC_URI = "git://invent.kde.org/frameworks/kactivities-stats;nobranch=1;protocol=https"
S = "${WORKDIR}/git"

require kactivities-stats_metainfo.inc
inherit cmake_kf5
inherit reuse_license_checksums
