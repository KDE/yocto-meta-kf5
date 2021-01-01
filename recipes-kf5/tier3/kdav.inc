# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    qtbase \
    kio \
    kcoreaddons \
    kcoreaddons-native \
    kdoctools \
    ki18n \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

require kdav_metainfo.inc
inherit cmake_kf5
inherit kdoctools
inherit kconfig
inherit kauth
inherit reuse_license_checksums
