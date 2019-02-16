DESCRIPTION = "KEmoticons"
HOMEPAGE = "https://api.kde.org/frameworks/kemoticons/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    karchive \
    kcoreaddons \
    kcoreaddons-native \
    kconfig \
    kconfig-native \
    kservice \
"

SRC_URI = "git://anongit.kde.org/kemoticons;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5

FILES_${PN} += " \
    ${libdir}/plugins/kf5/*.so \
    ${libdir}/plugins/kf5/emoticonsthemes/*.so \
    ${datadir}/emoticons/Konqi/*.png \
    ${datadir}/emoticons/Konqi/emoticons.xml \
    ${datadir}/emoticons/EmojiOne/*.png \
    ${datadir}/emoticons/EmojiOne/emoticons.xml \
    ${datadir}/emoticons/Breeze/*.png \
    ${datadir}/emoticons/Breeze/emoticons.xml \
"
