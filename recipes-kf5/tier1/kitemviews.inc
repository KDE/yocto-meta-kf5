DESCRIPTION = "KItemViews"
HOMEPAGE = "https://api.kde.org/frameworks/kitemviews/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = "git://anongit.kde.org/kitemviews;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
