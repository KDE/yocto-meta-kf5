DESCRIPTION = "KIO"
HOMEPAGE = "https://api.kde.org/frameworks/kio/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    karchive \
    kconfig \
    kconfig-native \
    kcoreaddons \
    kcoreaddons-native \
    kdbusaddons \
    ki18n \
    kservice \
    solid \
    kbookmarks \
    kcompletion \
    kconfigwidgets \
    kiconthemes \
    kitemviews \
    kjobwidgets \
    kwidgetsaddons \
    kwindowsystem\
"

SRC_URI = "git://anongit.kde.org/kio;nobranch=1"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit gettext
inherit python3native

FILES_${PN} += " \
    ${libdir}/plugins/kcm_*.so \
    ${libdir}/plugins/kf5/kio/*.so \
    ${libdir}/plugins/kf5/kded/*.so \
    ${libdir}/plugins/kf5/kiod/*.so \
    ${libdir}/plugins/kf5/urifilters/*.so \
    ${datadir}/knotifications5/proxyscout.notifyrc \
    ${datadir}/kservices5/*.protocol \
    ${datadir}/kservices5/*.desktop \
    ${datadir}/kservices5/useragentstrings/*.desktop \
    ${datadir}/kservices5/searchproviders/*.desktop \
    ${datadir}/kservicetypes5/*.desktop \
    ${datadir}/dbus-1/services/*.service \
    ${datadir}/kf5/kcookiejar/domain_info \
"

FILES_${PN}-dev += " \
    ${datadir}/dbus-1/interfaces/*.xml \
"
