DESCRIPTION = "KNewStuff"
HOMEPAGE = "https://api.kde.org/frameworks/knewstuff/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = " \
    libxml2-native \
    qtbase \
    qtdeclarative \
    karchive \
    kcompletion \
    kconfig \
    kconfig-native \
    kcoreaddons \
    kcoreaddons-native \
    kiconthemes \
    kio \
    kauth-native \
    kitemviews \
    kservice \
    ktextwidgets \
    kwidgetsaddons \
    kxmlgui \
    attica \
    kpackage \
    kpackage-native \
    kirigami \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums

FILES_${PN} += " \
    ${libdir}/qml/org/kde/newstuff/* \
    ${libdir}/qml/org/kde/newstuff/qml/* \
    ${datadir}/kf5/knewstuff/pics/*.png \
    ${datadir}/kf5/kmoretools/presets-kmoretools/* \
"
