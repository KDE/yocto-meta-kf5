# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018-2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.0-only"
PR = "r0"

DEPENDS:class-target = " \
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

DEPENDS:class-native = " \
    qtbase-native \
    extra-cmake-modules-native \
"

require kcmutils_metainfo.inc
inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums

EXTRA_OECMAKE:class-native = " -DTOOLS_ONLY=ON "

FILES:${PN} += " \
    ${libdir}/qml/org/kde/kcmutils/ \
"
