DESCRIPTION = "KCoreAddons"
HOMEPAGE = "https://api.kde.org/frameworks/kcoreaddons/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase kcoreaddons-native"

SRC_URI = "git://anongit.kde.org/kcoreaddons;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN} += " \
    ${datadir}/mime/packages/kde5.xml \
    ${datadir}/kf5/licenses/* \
"

FILES_${PN}-dev += " \
    ${bindir}/desktoptojson \
"
