DESCRIPTION = "KDED"
HOMEPAGE = "https://api.kde.org/frameworks/kded/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kconfig \
    kconfig-native \
    kcoreaddons \
    kcoreaddons-native \
    kcrash \
    kdbusaddons \
    kio \
    kauth-native \
    kservice \
"

SRC_URI = " \
    git://anongit.kde.org/kded;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit kdoctools

FILES_SOLIBSDEV = ""
FILES_${PN} += " \
    ${libdir}/libkdeinit5_kded5.so \
"
