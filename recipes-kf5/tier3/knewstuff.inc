DESCRIPTION = "KNewStuff"
HOMEPAGE = "https://api.kde.org/frameworks/knewstuff/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    karchive \
    kcompletion \
    kconfig \
    kcoreaddons \
    kiconthemes \
    kio \
    kitemviews \
    kservice \
    ktextwidgets \
    kwidgetsaddons \
    kxmlgui \
    attica \
"

SRC_URI = "git://anongit.kde.org/knewstuff;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n

FILES_${PN} += " \
    ${libdir}/qml/org/kde/newstuff/* \
    ${libdir}/qml/org/kde/newstuff/qml/* \
    ${datadir}/kf5/knewstuff/pics/*.png \
    ${datadir}/kf5/kmoretools/presets-kmoretools/* \
"
