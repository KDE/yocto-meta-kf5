DESCRIPTION = "KPeople"
HOMEPAGE = "https://api.kde.org/frameworks/kpeople/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    kcoreaddons \
    kcoreaddons-native \
    kwidgetsaddons \
    kservice \
    kconfig-native \
    kitemviews \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n

FILES_${PN} += " \
    ${libdir}/qml/org/kde/people/* \
    ${datadir}/kf5/kpeople/*.png \
"
