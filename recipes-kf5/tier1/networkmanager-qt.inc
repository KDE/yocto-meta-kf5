# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "NetworkManagerQt"
HOMEPAGE = "https://api.kde.org/frameworks/networkmanager-qt/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase networkmanager"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums

RDEPENDS_${PN} += "networkmanager"
