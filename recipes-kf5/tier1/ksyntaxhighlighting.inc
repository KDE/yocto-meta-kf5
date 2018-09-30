DESCRIPTION = "KSyntaxHighlighting"
HOMEPAGE = "https://api.kde.org/frameworks/syntax-highlighting/html/index.html"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://COPYING;md5=61be4d272e55cc2609d58596cf084908"
PR = "r0"

DEPENDS = "qtbase ksyntaxhighlighting-native"

SRC_URI = " \
    git://anongit.kde.org/syntax-highlighting;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit perlnative

EXTRA_OECMAKE_class-native += " -DKSYNTAXHIGHLIGHTING_USE_GUI=OFF"
EXTRA_OECMAKE_class-target += " -DKATEHIGHLIGHTINGINDEXER_EXECUTABLE=${STAGING_DIR_NATIVE}/${bindir}/katehighlightingindexer"

sysroot_stage_all_append_class-native () {
    mkdir -p ${SYSROOT_DESTDIR}/${bindir}
    cp ${B}/bin/katehighlightingindexer ${SYSROOT_DESTDIR}/${bindir}
}
