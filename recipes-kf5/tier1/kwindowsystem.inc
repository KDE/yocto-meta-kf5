DESCRIPTION = "KWindowSystem"
HOMEPAGE = "https://api.kde.org/frameworks/kwindowsystem/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = " \
    qtbase \
    ${@bb.utils.contains("DISTRO_FEATURES", "x11", "qtx11extras libxrender", "", d)} \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN} += " \
    ${libdir}/plugins/kf5/org.kde.kwindowsystem.platforms/* \
"
