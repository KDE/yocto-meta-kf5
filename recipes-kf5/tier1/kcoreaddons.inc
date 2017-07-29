DESCRIPTION = "KCoreAddons"
HOMEPAGE = "http://api.kde.org/frameworks-api/frameworks5-apidocs/kcoreaddons/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = "git://anongit.kde.org/kcoreaddons;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN}-dev += " \
    ${libdir}/cmake/KF5CoreAddons/*.cmake \
    ${prefix}/mkspecs/modules/qt_KCoreAddons.pri \
"

FILES_${PN} += " \
    /usr/share/mime/packages/kde5.xml \
    /usr/share/kf5/licenses/* \
"
