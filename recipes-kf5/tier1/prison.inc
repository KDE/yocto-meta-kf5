DESCRIPTION = "Prison"
HOMEPAGE = "https://api.kde.org/frameworks/prison/html/index.html"
LICENSE = "MIT"
PR = "r0"

DEPENDS = "qtbase qtdeclarative qrencode libdmtx"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums

FILES_${PN} += " \
    ${libdir}/qml/org/kde/prison/ \
"
