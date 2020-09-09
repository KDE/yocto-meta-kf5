DESCRIPTION = "KWidgetsAddons"
HOMEPAGE = "https://api.kde.org/frameworks/kwidgetsaddons/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums

FILES_${PN} += " \
    ${datadir}/kf5/kcharselect/kcharselect-data \
"
