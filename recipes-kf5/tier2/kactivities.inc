DESCRIPTION = "KActivities"
HOMEPAGE = "https://api.kde.org/frameworks/kactivities/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    kcoreaddons \
    kcoreaddons-native \
    kconfig \
    kconfig-native \
    kwindowsystem \
    boost \
"

SRC_URI = "git://anongit.kde.org/kactivities;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN} += " \
    ${libdir}/qml/org/kde/activities/* \
"
