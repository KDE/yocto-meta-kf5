# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "BSD-3-Clause & LGPL-2.0+ & LGPL-2.1+"
PR = "r0"

DEPENDS = " \
    qtbase \
    kwidgetsaddons \
    kconfig \
    kconfig-native \
"

require kcompletion_metainfo.inc
inherit cmake_kf5
inherit reuse_license_checksums
