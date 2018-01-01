DESCRIPTION = "KJS"
HOMEPAGE = "https://api.kde.org/frameworks/kjs/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase kjs-native pcre"

SRC_URI = " \
    git://anongit.kde.org/kjs;nobranch=1 \
    file://0001-optional-kdoctools.patch \
"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit perlnative

sysroot_stage_all_append_class-native () {
    mkdir -p ${SYSROOT_DESTDIR}/${bindir}
    cp ${B}/bin/icemaker ${SYSROOT_DESTDIR}/${bindir}
}

FILES_${PN}-dev += " \
    ${datadir}/kf5/kjs/create_hash_table \
"
