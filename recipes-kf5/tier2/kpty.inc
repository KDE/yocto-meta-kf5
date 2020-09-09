DESCRIPTION = "KPty"
HOMEPAGE = "https://api.kde.org/frameworks/kpty/html/index.html"
LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    kcoreaddons \
    kcoreaddons-native \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums
