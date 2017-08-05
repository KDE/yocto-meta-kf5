DESCRIPTION = "KActivitiesStats"
HOMEPAGE = "https://api.kde.org/frameworks/kactivities-stats/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LGPL-2.1;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = " \
    qtbase \
    kconfig \
    kactivities \
    boost \
"

SRC_URI = "git://anongit.kde.org/kactivities-stats;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
