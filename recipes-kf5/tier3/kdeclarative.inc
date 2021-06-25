# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018-2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = " \
    kauth-native \
    kconfig \
    kconfig-native \
    kglobalaccel \
    kguiaddons \
    kiconthemes \
    kio \
    knotifications \
    kpackage \
    kpackage-native \
    kwidgetsaddons \
    kwindowsystem \
    libepoxy \
    libxml2-native \
    qtbase \
    qtdeclarative \
"

require kdeclarative_metainfo.inc
inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums

FILES_${PN} += " \
    ${libdir}/qml/org/kde \
"

RDEPENDS_${PN} += " \
    qtdeclarative-qmlplugins \
"
