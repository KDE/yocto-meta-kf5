DESCRIPTION = "KConfigWidgets"
HOMEPAGE = "https://api.kde.org/frameworks/kconfigwidgets/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase \
    kauth \
    kauth-native \
    kcoreaddons \
    kcoreaddons-native \
    kcodecs \
    kconfig \
    kconfig-native \
    kguiaddons \
    kwidgetsaddons \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums

FILES_${PN}-dev += " \
    ${bindir}/preparetips5 \
"

RDEPENDS_${PN}-dev += "perl"
