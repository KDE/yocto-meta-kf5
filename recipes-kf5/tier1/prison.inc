DESCRIPTION = "Prison"
HOMEPAGE = "https://api.kde.org/frameworks/prison/html/index.html"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://LICENSE;md5=02744127548d68b579a51bda5af08e2b \
    "
PR = "r0"

DEPENDS = "qtbase qrencode libdmtx"

SRC_URI = "git://anongit.kde.org/prison;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
