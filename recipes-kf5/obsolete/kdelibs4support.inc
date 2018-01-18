DESCRIPTION = "KDELibs4Support"
HOMEPAGE = "https://api.kde.org/frameworks/kdelibs4support/html/index.html"
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
    kemoticons \
    kglobalaccel \
    kiconthemes \
    kio \
    knotifications \
    kparts \
    kunitconversion \
    liburi-perl-native \
    openssl \
"

SRC_URI = " \
    git://anongit.kde.org/kdelibs4support;nobranch=1 \
    file://0001-optional-kdoctools.patch \
    file://0002-optional-kdesignerplugin.patch \
    file://0003-unexport-kf5-config.patch \
"
S = "${WORKDIR}/git"

EXTRA_OECMAKE += " -DHAVE_GOOD_GETADDRINFO=ON"

inherit cmake_kf5
inherit gettext
inherit python3native
inherit perlnative

do_compile_prepend() {
    # desktoptojson needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
}

FILES_${PN} += " \
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

FILES_${PN}-dev += " \
    ${datadir}/kf5/widgets/pics/*.png \
"

RDEPENDS_kdelibs4support += "perl"
