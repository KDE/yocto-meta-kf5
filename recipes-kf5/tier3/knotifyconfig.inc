DESCRIPTION = "KNotifyConfig"
HOMEPAGE = "https://api.kde.org/frameworks/knotifyconfig/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    libxml2-native \
    qtbase \
    phonon \
    kcompletion \
    kconfig \
    kconfig-native \
    kio \
    kcoreaddons-native \
    kauth-native \
"

SRC_URI = "git://anongit.kde.org/knotifyconfig;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
