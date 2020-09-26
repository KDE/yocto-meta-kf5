# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT
#
# requires session management support in QtGui
# eg. via PACKAGECONFIG_append_pn-qtbase = "sm" in local.conf

DESCRIPTION = "KConfig"
HOMEPAGE = "https://api.kde.org/frameworks/kconfig/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase kconfig-native"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums
EXTRA_OECMAKE_class-native += " -DKCONFIG_USE_GUI=OFF"

FILES_${PN}-dev += " \
    ${libexecdir}/kf5/kconfig_compiler_kf5 \
"
