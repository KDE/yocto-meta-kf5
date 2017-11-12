DESCRIPTION = "Oxygen Icons"
HOMEPAGE = "https://api.kde.org/frameworks/oxygen-icons5/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

SRC_URI = "git://anongit.kde.org/oxygen-icons5;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN} += " \
    ${datadir}/icons/oxygen/index.theme \
    ${datadir}/icons/oxygen/base/*/*/*.png \
"
