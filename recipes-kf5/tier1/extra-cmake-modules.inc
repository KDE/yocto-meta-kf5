# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "BSD-2-Clause & BSD-3-Clause & MIT"
PR = "r0"

DEPENDS = "cmake-native qttools qtbase-native qttools-native"

require extra-cmake-modules_metainfo.inc
inherit cmake_qt5
inherit reuse_license_checksums

CLEANBROKEN = "1"

RDEPENDS:${PN}-dev = ""

FILES:${PN}-dev += " ${datadir}/ECM"

BBCLASSEXTEND = "native nativesdk"
