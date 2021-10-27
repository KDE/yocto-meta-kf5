# SPDX-FileCopyrightText: 2018 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Phonon"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = "qtbase extra-cmake-modules"

SRC_URI = "git://invent.kde.org/libraries/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_qt5
EXTRA_OECMAKE += " -DPHONON_BUILD_PHONON4QT5=ON"

# remove the widget designer plugin, this makes no sense for the target
do_install:append() {
    rm -rf ${D}/${libdir}/qt5/
    rm -rf ${D}/${libdir}/plugins/
}

FILES:${PN}-dev += " \
    ${datadir}/phonon4qt5/buildsystem/* \
    ${datadir}/dbus-1/interfaces/*.xml \
    ${datadir}/qt5/mkspecs/modules/*.pri \
    ${libdir}/cmake/phonon4qt5/* \
    ${prefix}/mkspecs \
"
