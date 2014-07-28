DESCRIPTION = "KPty"
HOMEPAGE = "http://api.kde.org/frameworks-api/frameworks5-apidocs/kpty/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "ki18n kcoreaddons"

GIT_REPO = "git://anongit.kde.org/kpty"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN}-dev += " \
    ${libdir}/cmake/KF5Pty/*.cmake \
    ${prefix}/mkspecs/modules/qt_KPty.pri \
"
