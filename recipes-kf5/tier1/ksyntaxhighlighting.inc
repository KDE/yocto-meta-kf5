DESCRIPTION = "KSyntaxHighlighting"
HOMEPAGE = "https://api.kde.org/frameworks/syntax-highlighting/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = "qtbase ksyntaxhighlighting-native"

SRC_URI = " \
    git://anongit.kde.org/syntax-highlighting;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit perlnative

EXTRA_OECMAKE_class-native += " -DKSYNTAXHIGHLIGHTING_USE_GUI=OFF"
EXTRA_OECMAKE_class-target += " -DKATEHIGHLIGHTINGINDEXER=${STAGING_DIR_NATIVE}/${bindir}/katehighlightingindexer"

sysroot_stage_all_append_class-native () {
    mkdir -p ${SYSROOT_DESTDIR}/${bindir}
    cp ${B}/src/indexer/katehighlightingindexer ${SYSROOT_DESTDIR}/${bindir}
}
