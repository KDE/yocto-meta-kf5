DESCRIPTION = "Solid"
HOMEPAGE = "http://api.kde.org/frameworks-api/frameworks5-apidocs/solid/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase"

GIT_REPO = "git://anongit.kde.org/solid"
S = "${WORKDIR}/git"

inherit cmake_qt5

FILES_${PN}-dev += " \
    ${libdir}/cmake/KF5Solid/*.cmake \
    ${prefix}/mkspecs/modules/qt_Solid.pri \
"

FILES_${PN}-dbg += " \
    ${libdir}/qml/org/kde/solid/.debug/*.so \
"

FILES_${PN} += " \
    ${libdir}/qml/org/kde/solid/qmldir \
    ${libdir}/qml/org/kde/solid/*.so \
"
