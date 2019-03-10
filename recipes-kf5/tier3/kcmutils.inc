DESCRIPTION = "KCMUtils"
HOMEPAGE = "https://api.kde.org/frameworks/kcmutils/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kitemviews \
    kconfigwidgets \
    kconfig-native \
    kauth-native \
    kcoreaddons \
    kcoreaddons-native \
    kiconthemes \
    kservice \
    kxmlgui \
    kdeclarative \
    kpackage \
    kpackage-native \
"

SRC_URI = "git://anongit.kde.org/kcmutils;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
