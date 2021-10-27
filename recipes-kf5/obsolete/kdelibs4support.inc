# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = " \
    qtbase \
    qtsvg \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kded \
    kdesignerplugin \
    kdesignerplugin-native \
    kemoticons \
    kglobalaccel \
    kiconthemes \
    kio \
    kcoreaddons-native \
    kconfig-native \
    kauth-native \
    knotifications \
    kparts \
    kunitconversion \
    liburi-perl-native \
    openssl \
"

EXTRA_OECMAKE:class-target += " -DHAVE_GOOD_GETADDRINFO=ON"

require kdelibs4support_metainfo.inc
inherit cmake_kf5
inherit ki18n
inherit perlnative
inherit kdoctools

do_compile:prepend() {
    # desktoptojson needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
}

do_install:append:class-target() {
    rm -rf ${D}${libdir}/plugins/designer
}

FILES:${PN} += " \
    ${libdir}/plugins/*.so \
    ${libdir}/plugins/kf5/kio/*.so \
    ${libdir}/plugins/kf5/kded/*.so \
    ${datadir}/kservices5/qimageioplugins/*.desktop \
    ${datadir}/kf5/kssl/ca-bundle.crt \
    ${datadir}/kf5/locale/currency/*.desktop \
    ${datadir}/kf5/locale/countries/*.desktop \
    ${datadir}/kf5/locale/countries/*/country.desktop \
    ${datadir}/kf5/locale/countries/*/flag.png \
    ${datadir}/kf5/kdoctools/customization/catalog4.xml \
    ${datadir}/kf5/kdoctools/customization/dtd/kdex.dtd \
"

FILES:${PN}-dev += " \
    ${datadir}/kf5/widgets/pics/*.png \
"

RDEPENDS:kdelibs4support += "perl"
