# SPDX-FileCopyrightText: 2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KHolidays"
HOMEPAGE = "https://api.kde.org/frameworks/kholidays/html/index.html"
LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS += "qtbase"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums

FILES_${PN} += " \
    ${libdir}/qml/org/kde/kholidays \
    ${datadir}/kf5/libkholidays \
"
