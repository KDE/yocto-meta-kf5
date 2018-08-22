DESCRIPTION = "Baloo"
HOMEPAGE = "https://api.kde.org/frameworks/baloo/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    kcoreaddons \
    kconfig \
    kdbusaddons \
    ki18n \
    kidletime \
    solid \
    kfilemetadata \
    kcrash \
    kio \
    lmdb \
    gettext-native \
"

SRC_URI = "git://anongit.kde.org/baloo;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit gettext
inherit python3native

FILES_${PN} += " \
    ${libdir}/plugins/kf5/kio/*.so \
    ${libdir}/plugins/kf5/kded/*.so \
    ${libdir}/qml/org/kde/baloo/* \
    ${libdir}/qml/org/kde/baloo/experimental/* \
    ${datadir}/icons/hicolor/128x128/apps/baloo.png \
"
