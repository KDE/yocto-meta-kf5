# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018-2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1-only"
PR = "r0"

DEPENDS = " \
    libxml2-native \
    qtbase \
    kconfig \
    kconfig-native \
    kcoreaddons \
    kcoreaddons-native \
    kiconthemes \
    kio \
    kauth-native \
    kjobwidgets \
    kservice \
    ktextwidgets \
    kwidgetsaddons \
    kxmlgui \
"

require kparts_metainfo.inc
inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums
