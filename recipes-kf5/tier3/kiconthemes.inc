DESCRIPTION = "KIconThemes"
HOMEPAGE = "https://api.kde.org/frameworks/kiconthemes/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase \
    qtsvg \
    karchive \
    kcoreaddons \
    kcoreaddons-native \
    kconfigwidgets \
    kconfig-native \
    kauth-native \
    kwidgetsaddons \
    kitemviews \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums

FILES_${PN} += "\
    ${libdir}/plugins/iconengines/ \
"
