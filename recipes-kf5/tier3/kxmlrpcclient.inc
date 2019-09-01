DESCRIPTION = "KXmlRpcClient"
HOMEPAGE = "https://api.kde.org/frameworks/kxmlrpcclient/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=4fbd65380cdd255951079008b364516c"
PR = "r0"

DEPENDS = " \
    qtbase \
    ki18n \
    kio \
    kcoreaddons-native \
    kconfig-native \
    kauth-native \
"

SRC_URI = "git://anongit.kde.org/kxmlrpcclient;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit gettext
inherit python3native
inherit kdoctools
