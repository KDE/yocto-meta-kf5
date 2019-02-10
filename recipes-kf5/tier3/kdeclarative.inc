DESCRIPTION = "KDeclarative"
HOMEPAGE = "https://api.kde.org/frameworks/kdeclarative/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    kconfig \
    kiconthemes \
    kio \
    kwidgetsaddons \
    kwindowsystem \
    kglobalaccel \
    kguiaddons \
    kpackage \
    libepoxy \
"

SRC_URI = "git://anongit.kde.org/kdeclarative;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n

FILES_${PN} += " \
    ${libdir}/qml/org/kde \
"

RDEPENDS_${PN} += " \
    qtdeclarative-qmlplugins \
"
