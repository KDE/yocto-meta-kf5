DESCRIPTION = "ModemManagerQt"
HOMEPAGE = "https://api.kde.org/frameworks/modemmanager-qt/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = "qtbase modemmanager"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5

RDEPENDS_${PN} += "modemmanager"
