# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "MIT & BSD-3-Clause & LGPL-2.0+ & Unicode-DFS-2016"
PR = "r0"

DEPENDS = " \
    qtbase \
    kcoreaddons \
    kcoreaddons-native \
    kconfig \
    kconfig-native \
    ki18n \
    kcodecs \
"

require kcontacts_metainfo.inc
inherit cmake_kf6
inherit ki18n
inherit reuse_license_checksums
