DESCRIPTION = "KImageFormats"
HOMEPAGE = "https://api.kde.org/frameworks/kimageformats/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums

FILES_${PN}-dbg += " \
    ${libdir}/plugins/imageformats/.debug/*.so \
"

FILES_${PN} += " \
    ${libdir}/plugins/imageformats/*.so \
    ${datadir}/kservices5/qimageioplugins/*.desktop \
"
