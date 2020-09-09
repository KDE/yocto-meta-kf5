DESCRIPTION = "Ki18n"
HOMEPAGE = "https://api.kde.org/frameworks/ki18n/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS_class-native += " \
    qtbase \
    gettext-native \
    extra-cmake-modules \
"
DEPENDS_class-target += " \
    qtdeclarative \
    gettext-native \
    extra-cmake-modules \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit python3native
inherit reuse_license_checksums

EXTRA_OECMAKE_class-native += " -DBUILD_WITH_QTSCRIPT=OFF -DLibIntl_SEARCH_PATH=/usr/include"

FILES_${PN}-dbg += " \
    ${libdir}/plugins/kf5/.debug/ktranscript.so \
"

FILES_${PN} += " \
    ${libdir}/plugins/kf5/ktranscript.so \
"
