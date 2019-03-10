DESCRIPTION = "KPackage"
HOMEPAGE = "https://api.kde.org/frameworks/kpackage/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = " \
    qtbase \
    karchive \
    kcoreaddons \
    kpackage-native \
"

SRC_URI = " \
    git://anongit.kde.org/kpackage;nobranch=1 \
    file://0001-kf5-host-tooling-support.diff \
"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
