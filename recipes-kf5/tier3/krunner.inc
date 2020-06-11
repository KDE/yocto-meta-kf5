DESCRIPTION = "KRunner"
HOMEPAGE = "https://api.kde.org/frameworks/krunner/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    libxml2-native \
    kconfig \
    kconfig-native \
    kcoreaddons \
    kcoreaddons-native \
    kio \
    kauth-native \
    kservice \
    plasma-framework \
    kpackage-native \
    solid \
    threadweaver \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n

FILES_${PN} += " \
  ${libdir}/qml/org/kde/runnermodel/* \
"
