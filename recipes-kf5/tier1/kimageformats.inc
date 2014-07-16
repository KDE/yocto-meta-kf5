DESCRIPTION = "KImageFormats"
HOMEPAGE = "http://api.kde.org/frameworks-api/frameworks5-apidocs/kimageformats/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase"

GIT_REPO = "git://anongit.kde.org/kimageformats"
S = "${WORKDIR}/git"

inherit cmake_qt5

FILES_${PN}-dev += " \
    ${libdir}/cmake/KF5ImageFormats/*.cmake \
    ${prefix}/mkspecs/modules/qt_KImageFormats.pri \
"

FILES_${PN}-dbg += " \
    ${libdir}/plugins/imageformats/.debug/*.so \
"

FILES_${PN} += " \
    ${libdir}/plugins/imageformats/*.so \
    /usr/share/kservices5/qimageioplugins/*.desktop \
"
