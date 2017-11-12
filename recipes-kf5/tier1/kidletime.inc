DESCRIPTION = "KIdleTime"
HOMEPAGE = "https://api.kde.org/frameworks/kidletime/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = " \
    qtbase \
    ${@bb.utils.contains("DISTRO_FEATURES", "x11", "qtx11extras", "", d)} \
"

SRC_URI = " \
    git://anongit.kde.org/kidletime;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_kf5
