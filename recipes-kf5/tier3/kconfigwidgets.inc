# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase \
    kauth \
    kauth-native \
    kcoreaddons \
    kcoreaddons-native \
    kcodecs \
    kconfig \
    kconfig-native \
    kguiaddons \
    kwidgetsaddons \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

require kconfigwidgets_metainfo.inc
inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums

FILES_${PN}-dev += " \
    ${bindir}/preparetips5 \
"

RDEPENDS_${PN}-dev += "perl"
