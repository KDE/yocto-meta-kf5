DESCRIPTION = "KActivitiesStats"
HOMEPAGE = "https://api.kde.org/frameworks/kactivities-stats/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LGPL-2.1;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = " \
    qtbase \
    kconfig \
    kactivities \
    kcoreaddons-native \
    kconfig-native \
    kauth-native \
    boost \
"

SRC_URI = "git://invent.kde.org/frameworks/kactivities-stats;nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
