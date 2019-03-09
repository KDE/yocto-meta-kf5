DESCRIPTION = "KFileMetaData"
HOMEPAGE = "https://api.kde.org/frameworks/kfilemetadata/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LGPL-2.1;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = " \
    qtbase \
    kcoreaddons \
    kcoreaddons-native \
"

SRC_URI = "git://anongit.kde.org/kfilemetadata;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
inherit distro_features_check

REQUIRED_DISTRO_FEATURES += "xattr"

FILES_${PN} += " \
  ${libdir}/plugins/kf5/kfilemetadata/*.so \
"
