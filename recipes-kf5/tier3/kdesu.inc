DESCRIPTION = "KDESu"
HOMEPAGE = "https://api.kde.org/frameworks/kdesu/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kcoreaddons \
    ki18n \
    kservice \
    kpty \
    gettext-native \
"

SRC_URI = "git://anongit.kde.org/kdesu;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit gettext
inherit python3native
