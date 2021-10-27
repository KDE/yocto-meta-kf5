# SPDX-FileCopyrightText: 2017, 2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Polkit-Qt-1"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING;md5=7dbc59dc445b2261c4fb2f9466e3446a"
PR = "r0"

DEPENDS = "qtbase polkit"

SRC_URI = "git://invent.kde.org/libraries/polkit-qt-1.git;nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES:${PN}-dev += " \
    ${libdir}/cmake/PolkitQt5-1/* \
"
