DESCRIPTION = "Kirigami"
HOMEPAGE = "https://api.kde.org/frameworks/kirigami/html/index.html"
LICENSE = "LGPL-2.0"
LIC_FILES_CHKSUM = "file://LICENSE.LGPL-2;md5=5f30f0716dfdd0d91eb439ebec522ec2"
PR = "r0"

DEPENDS = "qtquickcontrols2 qtsvg"

SRC_URI = "git://anongit.kde.org/kirigami;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN} += " \
    ${libdir}/qml/org/kde/kirigami.2 \
"

RDEPENDS_${PN} += " \
    qtgraphicaleffects-qmlplugins \
"
