DESCRIPTION = "KRunner"
HOMEPAGE = "https://api.kde.org/frameworks/krunner/html/index.html"
LICENSE = "LGPL-2.1"
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
inherit reuse_license_checksums

FILES_${PN} += " \
  ${libdir}/qml/org/kde/runnermodel/* \
"
