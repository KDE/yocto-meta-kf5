DESCRIPTION = "KCompletion"
HOMEPAGE = "https://api.kde.org/frameworks/kcompletion/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kwidgetsaddons \
    kconfig \
    kconfig-native \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums
