# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KInit"
HOMEPAGE = "https://api.kde.org/frameworks/kinit/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kservice \
    kio \
    kcoreaddons-native \
    kauth-native \
    kwindowsystem \
    kcrash \
    kconfig \
    kconfig-native \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
inherit kdoctools
inherit reuse_license_checksums

FILES_SOLIBSDEV = ""
FILES_${PN} += " \
    ${libdir}/libkdeinit5_klauncher.so \
"
