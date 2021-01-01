# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    qtbase \
    kconfig \
    kconfig-native \
    kcoreaddons \
    kcoreaddons-native \
    kcodecs \
    kconfigwidgets \
    kauth-native \
    kiconthemes \
    kwidgetsaddons \
    kxmlgui \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

require kbookmarks_metainfo.inc
inherit cmake_kf5
inherit reuse_license_checksums
