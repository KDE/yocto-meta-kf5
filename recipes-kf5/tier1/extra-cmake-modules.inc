# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Extra CMake Modules"
HOMEPAGE = "https://api.kde.org/frameworks/extra-cmake-modules/html/index.html"
LICENSE = "BSD-3-Clause"
PR = "r0"

DEPENDS = "cmake-native qttools"

inherit reuse_license_checksums

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"
CLEANBROKEN = "1"

do_compile() {
    cmake -DCMAKE_INSTALL_PREFIX:PATH=${D}/${prefix}/ .
    make
}

do_install() {
    make install
}

FILES_${PN}-dev += " ${datadir}/ECM"

BBCLASSEXTEND = "native nativesdk"
