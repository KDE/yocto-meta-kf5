DESCRIPTION = "KPeople"
HOMEPAGE = "https://api.kde.org/frameworks/kpeople/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    kcoreaddons \
    ki18n \
    kwidgetsaddons \
    kservice \
    kitemviews \
    gettext-native \
"

SRC_URI = "git://anongit.kde.org/kpeople;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit gettext
inherit python3native

FILES_${PN} += " \
    ${libdir}/qml/org/kde/people/* \
    ${datadir}/kf5/kpeople/*.png \
"
