DESCRIPTION = "KDesignerPlugin"
HOMEPAGE = "https://api.kde.org/frameworks/kdesignerplugin/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kcoreaddons \
    kconfig \
    kdesignerplugin-native \
"

SRC_URI = " \
    git://anongit.kde.org/kdesignerplugin;nobranch=1 \
    file://0001-optional-kdoctools.patch \
"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN}-dev += " \
  ${datadir}/kf5/widgets/pics/*.png \
"

sysroot_stage_all_append_class-target () {
    mkdir -p ${SYSROOT_DESTDIR}${bindir}
    cp ${STAGING_BINDIR_NATIVE}/kgendesignerplugin ${SYSROOT_DESTDIR}/${bindir}
}

FILES_${PN}-dev += " \
    ${bindir}/kgendesignerplugin \
"
