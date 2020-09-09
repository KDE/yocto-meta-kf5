DESCRIPTION = "KCMUtils"
HOMEPAGE = "https://api.kde.org/frameworks/kcmutils/html/index.html"
LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    qtbase \
    libxml2-native \
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

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums
