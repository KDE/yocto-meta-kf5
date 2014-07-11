DESCRIPTION = "KArchive"
HOMEPAGE = "http://api.kde.org/frameworks-api/frameworks5-apidocs/karchive/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "ecm zlib bzip2 xz qtbase"

GIT_REPO = "git://anongit.kde.org/karchive;protocol=git"
S = "${WORKDIR}/git"

inherit cmake_qt5
inherit cmake

FILES_${PN} += " \
    ${base_prefix}/usr/lib/cmake/KF5Archive/*.cmake \
    ${base_prefix}/usr/mkspecs/modules/qt_KArchive.pri \
"
