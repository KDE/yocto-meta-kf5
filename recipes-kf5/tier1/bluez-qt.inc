DESCRIPTION = "BluezQt"
HOMEPAGE = "https://api.kde.org/frameworks/bluez-qt/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = "git://anongit.kde.org/bluez-qt;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN} += " \
    ${libdir}/qml/org/kde/bluezqt/* \
"

RDEPENDS_${PN} += "bluez5"
