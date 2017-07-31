# requires session management support in QtGui
# eg. via PACKAGECONFIG_append_pn-qtbase = "sm" in local.conf

DESCRIPTION = "KConfig"
HOMEPAGE = "https://api.kde.org/frameworks/kconfig/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = " \
    git://anongit.kde.org/kconfig;nobranch=1 \
    file://0001-no-gui.patch \
"
S = "${WORKDIR}/git"

inherit cmake_kf5

sysroot_stage_all_append_class-target () {
    mkdir -p ${SYSROOT_DESTDIR}${libexecdir}/kf5
    cp ${D}${libexecdir}/kf5/kconf_update ${SYSROOT_DESTDIR}${libexecdir}/kf5
}
