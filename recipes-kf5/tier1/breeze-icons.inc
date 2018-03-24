DESCRIPTION = "Breeze Icons"
HOMEPAGE = "https://api.kde.org/frameworks/breeze-icons/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

# DEPENDS = "qtbase"

SRC_URI = "git://anongit.kde.org/breeze-icons;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
# binary icon resource generation has no cross-compilation support yet
EXTRA_OECMAKE += " -DBINARY_ICONS_RESOURCE=OFF"

FILES_${PN} += " \
    ${datadir}/icons/breeze \
    ${datadir}/icons/breeze-dark \
"
