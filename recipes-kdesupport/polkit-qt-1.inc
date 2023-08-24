# SPDX-FileCopyrightText: 2017, 2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Polkit-Qt-1"
LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://LICENSES/LGPL-2.0-or-later.txt;md5=da48810c4ddf8e49efa031294a26b98c"
PR = "r0"

DEPENDS = "qtbase polkit"

SRC_URI = "git://invent.kde.org/libraries/polkit-qt-1.git;nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES:${PN}-dev += " \
    ${libdir}/cmake/PolkitQt5-1/* \
"
