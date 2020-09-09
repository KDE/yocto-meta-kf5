DESCRIPTION = "KXmlGui"
HOMEPAGE = "https://api.kde.org/frameworks/kxmlgui/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase \
    kcoreaddons \
    kitemviews \
    kconfig \
    kconfig-native \
    kconfigwidgets \
    kconfig-native \
    kauth-native \
    kiconthemes \
    ktextwidgets \
    kwidgetsaddons \
    kwindowsystem \
    kglobalaccel\
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums
