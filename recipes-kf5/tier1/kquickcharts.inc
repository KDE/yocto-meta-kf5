DESCRIPTION = "KQuickCharts"
HOMEPAGE = "https://api.kde.org/frameworks/kquickcharts/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING;md5=12547d25b034355eba3018eb0d9be513"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    qtquickcontrols2 \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN} += " \
  ${libdir}/qml/org/kde/quickcharts \
"
