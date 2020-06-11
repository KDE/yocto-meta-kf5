DESCRIPTION = "KTextWidgets"
HOMEPAGE = "https://api.kde.org/frameworks/ktextwidgets/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = "qtbase \
    kcompletion \
    kconfig \
    kconfig-native \
    kconfigwidgets \
    kcoreaddons-native \
    kauth-native \
    kiconthemes \
    kservice \
    kwidgetsaddons \
    sonnet \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
