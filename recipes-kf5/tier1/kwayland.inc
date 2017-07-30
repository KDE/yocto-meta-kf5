DESCRIPTION = "KWayland"
HOMEPAGE = "https://api.kde.org/frameworks/kwayland/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase wayland-native"

SRC_URI = "git://anongit.kde.org/kwayland"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN}-dev += " \
    ${libdir}/cmake/KF5Wayland/*.cmake \
    ${prefix}/mkspecs/modules/qt_KWayland*.pri \
"
