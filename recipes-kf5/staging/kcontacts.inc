DESCRIPTION = "KContacts"
HOMEPAGE = "https://api.kde.org/kdepim/kcontacts/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kcoreaddons \
    kcoreaddons-native \
    kconfig \
    kconfig-native \
    ki18n \
    kcodecs \
"

RDEPENDS_${PN} += "iso-codes"

SRC_URI = "git://anongit.kde.org/${BPN};nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
