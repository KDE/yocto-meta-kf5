DESCRIPTION = "KXmlRpcClient"
HOMEPAGE = "https://api.kde.org/frameworks/kxmlrpcclient/html/index.html"
LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    qtbase \
    ki18n \
    kio \
    kcoreaddons-native \
    kconfig-native \
    kauth-native \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit gettext
inherit python3native
inherit kdoctools
inherit reuse_license_checksums
