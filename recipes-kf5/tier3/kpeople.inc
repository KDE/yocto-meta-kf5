DESCRIPTION = "KPeople"
HOMEPAGE = "https://api.kde.org/frameworks/kpeople/html/index.html"
LICENSE = "LGPL-2.1"
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
inherit reuse_license_checksums

FILES_${PN} += " \
    ${libdir}/qml/org/kde/people/* \
    ${datadir}/kf5/kpeople/*.png \
"
