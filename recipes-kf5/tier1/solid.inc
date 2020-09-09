DESCRIPTION = "Solid"
HOMEPAGE = "https://api.kde.org/frameworks/solid/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase bison-native"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums

FILES_${PN} += " \
    ${libdir}/qml/org/kde/solid/qmldir \
    ${libdir}/qml/org/kde/solid/*.so \
"
