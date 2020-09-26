# SPDX-FileCopyrightText: 2014 Johan Thelin <johan.thelin@pelagicore.com>
# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KCrash"
HOMEPAGE = "https://api.kde.org/frameworks/kcrash/html/index.html"
LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    kcoreaddons \
    kcoreaddons-native \
    kwindowsystem \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums
