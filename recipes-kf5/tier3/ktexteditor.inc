DESCRIPTION = "KTextEditor"
HOMEPAGE = "https://api.kde.org/frameworks/ktexteditor/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    libxml2-native \
    qtbase \
    karchive \
    kconfig \
    kconfig-native \
    kguiaddons \
    kio \
    kcoreaddons-native \
    kauth-native \
    kparts \
    sonnet \
    kiconthemes \
    ksyntaxhighlighting \
"

SRC_URI = " \
    git://anongit.kde.org/ktexteditor;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n

do_compile_prepend() {
    # desktoptojson needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
}

FILES_${PN} += " \
  ${libdir}/plugins/kf5/parts/katepart.so \
  ${datadir}/katepart5/script/README.md \
"
