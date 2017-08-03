DESCRIPTION = "KRunner"
HOMEPAGE = "https://api.kde.org/frameworks/krunner/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    kconfig \
    kcoreaddons \
    ki18n \
    kio \
    kservice \
    plasma-framework \
    solid \
    threadweaver \
"

SRC_URI = "git://anongit.kde.org/krunner;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit gettext
inherit python3native

FILES_${PN} += " \
  ${libdir}/qml/org/kde/runnermodel/* \
  ${datadir}/kservicetypes5/*.desktop \
"

FILES_${PN}-dev += " \
    ${datadir}/kdevappwizard/templates/* \
"
