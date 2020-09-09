DESCRIPTION = "KCoreAddons"
HOMEPAGE = "https://api.kde.org/frameworks/kcoreaddons/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase kcoreaddons-native"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums

FILES_${PN} += " \
    ${datadir}/mime/packages/kde5.xml \
    ${datadir}/kf5/licenses/* \
"

FILES_${PN}-dev += " \
    ${bindir}/desktoptojson \
"
