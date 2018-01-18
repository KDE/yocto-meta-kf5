DESCRIPTION = "Purpose"
HOMEPAGE = "https://api.kde.org/frameworks/purpose/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    kcoreaddons \
    ki18n \
    kconfig \
    kio \
"

SRC_URI = "git://anongit.kde.org/${BPN};nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit gettext
inherit python3native

FILES_${PN} += " \
    ${libdir}/plugins/purpose \
    ${libdir}/qml/org/kde/purpose \
    ${datadir}/icons/hicolor \
"
