DESCRIPTION = "KArchive"
HOMEPAGE = "https://api.kde.org/frameworks/karchive/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "zlib bzip2 xz qtbase"

SRC_URI = "git://anongit.kde.org/karchive;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
