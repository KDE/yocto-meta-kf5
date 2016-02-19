DESCRIPTION = "Ki18n"
HOMEPAGE = "http://api.kde.org/frameworks-api/frameworks5-apidocs/ki18n/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase qtscript"

SRC_URI = "git://anongit.kde.org/ki18n"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit perlnative

FILES_${PN}-dev += " \
    ${libdir}/cmake/KF5I18n/*.cmake \
    ${prefix}/mkspecs/modules/qt_KI18n.pri \
"

FILES_${PN}-dbg += " \
    ${libdir}/plugins/kf5/.debug/ktranscript.so \
"

FILES_${PN} += " \
    ${libdir}/plugins/kf5/ktranscript.so \
"
