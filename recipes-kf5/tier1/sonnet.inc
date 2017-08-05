DESCRIPTION = "Sonnet"
HOMEPAGE = "https://api.kde.org/frameworks/sonnet/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "qtbase sonnet-native"

# patch 0001 can be dropped once we update to 5.37
SRC_URI = "git://anongit.kde.org/sonnet;nobranch=1 \
    file://0001-no-widgets.patch \
    file://0002-unexport-helpers.patch \
"
S = "${WORKDIR}/git"

inherit cmake_kf5
EXTRA_OECMAKE_class-native += " -DSONNET_USE_WIDGETS=OFF"
EXTRA_OECMAKE_class-target += " -DPARSETRIGRAMS_EXECUTABLE=${STAGING_DIR_NATIVE}/${bindir}/parsetrigrams"

FILES_${PN} += " \
    ${datadir}/kf5/sonnet/* \
"
