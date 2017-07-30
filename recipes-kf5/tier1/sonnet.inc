DESCRIPTION = "Sonnet"
HOMEPAGE = "https://api.kde.org/frameworks/sonnet/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase sonnet-native qtbase-native"

SRC_URI = "git://anongit.kde.org/sonnet;nobranch=1 \
    file://0001-no-widgets.patch \
    file://0002-unexport-helpers.patch \
"
S = "${WORKDIR}/git"

inherit cmake_kf5
EXTRA_OECMAKE += " -DPARSETRIGRAMS_EXECUTABLE=${STAGING_DIR_NATIVE}/usr/bin/parsetrigrams"

FILES_${PN} += " \
    ${datadir}/kf5/sonnet/* \
"

FILES_${PN}-dev += " \
    ${libdir}/cmake/KF5Sonnet/*.cmake \
    ${prefix}/mkspecs/modules/qt_Sonnet*.pri \
"
