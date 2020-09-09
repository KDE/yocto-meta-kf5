DESCRIPTION = "KNotifyConfig"
HOMEPAGE = "https://api.kde.org/frameworks/knotifyconfig/html/index.html"
LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    libxml2-native \
    qtbase \
    phonon \
    kcompletion \
    kconfig \
    kconfig-native \
    kio \
    kcoreaddons-native \
    kauth-native \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums
