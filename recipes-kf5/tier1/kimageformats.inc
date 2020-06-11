DESCRIPTION = "KImageFormats"
HOMEPAGE = "https://api.kde.org/frameworks/kimageformats/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN}-dbg += " \
    ${libdir}/plugins/imageformats/.debug/*.so \
"

FILES_${PN} += " \
    ${libdir}/plugins/imageformats/*.so \
    ${datadir}/kservices5/qimageioplugins/*.desktop \
"
