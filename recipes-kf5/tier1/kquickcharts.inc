DESCRIPTION = "KQuickCharts"
HOMEPAGE = "https://api.kde.org/frameworks/kquickcharts/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    qtquickcontrols2 \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums

FILES_${PN} += " \
  ${libdir}/qml/org/kde/quickcharts \
"
