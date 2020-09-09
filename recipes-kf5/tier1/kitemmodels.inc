DESCRIPTION = "KItemModels"
HOMEPAGE = "https://api.kde.org/frameworks/kitemmodels/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums

FILES_${PN} += " \
    ${libdir}/qml/org/kde/kitemmodels/qmldir \
    ${libdir}/qml/org/kde/kitemmodels/libitemmodelsplugin.so \
"
