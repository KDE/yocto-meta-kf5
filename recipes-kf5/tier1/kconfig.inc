# requires session management support in QtGui
# eg. via PACKAGECONFIG_append_pn-qtbase = "sm" in local.conf

DESCRIPTION = "KConfig"
HOMEPAGE = "https://api.kde.org/frameworks/kconfig/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase kconfig-native"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
EXTRA_OECMAKE_class-native += " -DKCONFIG_USE_GUI=OFF"

FILES_${PN}-dev += " \
    ${libexecdir}/kf5/kconfig_compiler_kf5 \
"
