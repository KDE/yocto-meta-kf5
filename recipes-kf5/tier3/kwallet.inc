DESCRIPTION = "KWallet"
HOMEPAGE = "https://api.kde.org/frameworks/kwallet/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kconfig \
    kconfig-native \
    kconfigwidgets \
    kauth-native \
    kcoreaddons \
    kcoreaddons-native \
    kdbusaddons \
    knotifications \
    kservice \
    kwidgetsaddons \
    kwindowsystem \
    libgcrypt \
"

SRC_URI = " \
    git://anongit.kde.org/kwallet;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
