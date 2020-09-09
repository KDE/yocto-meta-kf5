DESCRIPTION = "KFileMetaData"
HOMEPAGE = "https://api.kde.org/frameworks/kfilemetadata/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kcoreaddons \
    kcoreaddons-native \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
inherit distro_features_check
inherit reuse_license_checksums

REQUIRED_DISTRO_FEATURES += "xattr"

FILES_${PN} += " \
  ${libdir}/plugins/kf5/kfilemetadata/*.so \
"
