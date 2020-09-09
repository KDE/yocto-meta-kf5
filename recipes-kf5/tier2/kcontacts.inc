DESCRIPTION = "KContacts"
HOMEPAGE = "https://api.kde.org/kdepim/kcontacts/html/index.html"
LICENSE = "LGPL-2.0"
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

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums
