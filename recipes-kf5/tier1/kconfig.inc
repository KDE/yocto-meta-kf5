# requires session management support in QtGui
# eg. via PACKAGECONFIG_append_pn-qtbase = "sm" in local.conf

DESCRIPTION = "KConfig"
HOMEPAGE = "https://api.kde.org/frameworks/kconfig/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase kconfig-native"

SRC_URI = " \
    git://anongit.kde.org/kconfig;nobranch=1 \
    file://0001-no-gui.patch \
"
S = "${WORKDIR}/git"

inherit cmake_kf5

# we need the config compiler for the host, but kconf_update for the target
# the latter also needs to be in the sysroot to silence the cmake config files checking its existence
sysroot_stage_all_append_class-target () {
    mkdir -p ${SYSROOT_DESTDIR}${libexecdir}/kf5
    cp ${D}${libexecdir}/kf5/kconf_update ${SYSROOT_DESTDIR}${libexecdir}/kf5
    cp ${STAGING_LIBEXECDIR_NATIVE}/kf5/kconfig_compiler_kf5 ${SYSROOT_DESTDIR}/${libexecdir}/kf5
}

FILES_${PN}-dev += " \
    ${libexecdir}/kf5/kconfig_compiler_kf5 \
"
