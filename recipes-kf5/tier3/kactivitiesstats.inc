DESCRIPTION = "KActivitiesStats"
HOMEPAGE = "https://api.kde.org/frameworks/kactivities-stats/html/index.html"
LICENSE = "LGPL-2.1"
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
inherit reuse_license_checksums
