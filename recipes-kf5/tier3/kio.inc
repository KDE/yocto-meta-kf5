DESCRIPTION = "KIO"
HOMEPAGE = "https://api.kde.org/frameworks/kio/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    karchive \
    kdbusaddons \
    kservice \
    solid \
    kbookmarks \
    kcompletion \
    kconfigwidgets \
    kiconthemes \
    kitemviews \
    kjobwidgets \
    kwidgetsaddons \
    kwindowsystem \
"

SRC_URI = "git://anongit.kde.org/kio;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit kcoreaddons
inherit kconfig
inherit ki18n
inherit kdoctools
inherit kauth

FILES_${PN} += " \
    ${libdir}/plugins/kcm_*.so \
    ${libdir}/plugins/kf5/kio/*.so \
    ${libdir}/plugins/kf5/kded/*.so \
    ${libdir}/plugins/kf5/kiod/*.so \
    ${libdir}/plugins/kf5/urifilters/*.so \
    ${datadir}/kservices5/useragentstrings/*.desktop \
    ${datadir}/kservices5/searchproviders/*.desktop \
    ${datadir}/kf5/kcookiejar/domain_info \
    ${datadir}/kconf_update \
"

RDEPENDS_${PN} += " \
    ca-certificates \
"
