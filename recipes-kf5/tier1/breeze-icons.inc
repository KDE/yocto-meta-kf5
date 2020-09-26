# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Breeze Icons"
HOMEPAGE = "https://api.kde.org/frameworks/breeze-icons/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
# bash is in the hosttools folder in PATH, but that's not detected automatically
# due to the CMAKE_FIND_ROOT_PATH settings
EXTRA_OECMAKE_class-target += " -DBASH_EXE=`which bash`"

FILES_${PN} += " \
    ${datadir}/icons/breeze \
    ${datadir}/icons/breeze-dark \
"
