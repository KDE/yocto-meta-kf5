# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KPackage"
HOMEPAGE = "https://api.kde.org/frameworks/kpackage/html/index.html"
LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    qtbase \
    karchive \
    kcoreaddons \
    kpackage-native \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums
