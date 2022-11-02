# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018-2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    libxml2-native \
    qtbase \
    phonon \
    kcompletion \
    kconfig \
    kconfig-native \
    kio \
    kcoreaddons-native \
    kauth-native \
"

require knotifyconfig_metainfo.inc
inherit cmake_kf6
inherit ki18n
inherit reuse_license_checksums
