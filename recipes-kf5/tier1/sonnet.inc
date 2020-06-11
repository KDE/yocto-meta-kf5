DESCRIPTION = "Sonnet"
HOMEPAGE = "https://api.kde.org/frameworks/sonnet/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase sonnet-native"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
EXTRA_OECMAKE_append_class-native += " -DSONNET_USE_WIDGETS=OFF"
EXTRA_OECMAKE_append_class-target += " -DPARSETRIGRAMS_EXECUTABLE=${STAGING_DIR_NATIVE}/${bindir}/parsetrigrams"

FILES_${PN} += " \
    ${datadir}/kf5/sonnet/* \
"
