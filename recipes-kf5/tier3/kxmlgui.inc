# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase \
    kcoreaddons \
    kitemviews \
    kconfig \
    kconfig-native \
    kconfigwidgets \
    kconfig-native \
    kauth-native \
    kiconthemes \
    ktextwidgets \
    kwidgetsaddons \
    kwindowsystem \
    kglobalaccel\
"

require kxmlgui_metainfo.inc
inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums
