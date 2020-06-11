DESCRIPTION = "KGlobalAccel"
HOMEPAGE = "https://api.kde.org/frameworks/kglobalaccel/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = " \
    qtbase \
    kcoreaddons \
    kcoreaddons-native \
    kconfig \
    kconfig-native \
    kcrash \
    kdbusaddons \
    ${@bb.utils.contains("DISTRO_FEATURES", "x11", "qtx11extras", "", d)} \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN} += " \
    ${libdir}/plugins/org.kde.kglobalaccel5.platforms/*.so \
"
