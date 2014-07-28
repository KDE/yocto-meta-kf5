DESCRIPTION = "KJobWidgets"
HOMEPAGE = "http://api.kde.org/frameworks-api/frameworks5-apidocs/kjobwidgets/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase kcoreaddons kwidgetsaddons"

GIT_REPO = "git://anongit.kde.org/kjobwidgets"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN} += " \
    /usr/share/dbus-1/interfaces/*.xml \
"

FILES_${PN}-dev += " \
    ${libdir}/cmake/KF5JobWidgets/*.cmake \
    ${prefix}/mkspecs/modules/qt_KJobWidgets.pri \
"
