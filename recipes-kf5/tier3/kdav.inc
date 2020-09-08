DESCRIPTION = "KDAV"
HOMEPAGE = "https://api.kde.org/frameworks/kdav/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=5f30f0716dfdd0d91eb439ebec522ec2"
PR = "r0"

DEPENDS = " \
    qtbase \
    kio \
    kcoreaddons \
    kcoreaddons-native \
    kdoctools \
    ki18n \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit kdoctools
inherit kconfig
inherit kauth
