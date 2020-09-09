DESCRIPTION = "Extra CMake Modules"
HOMEPAGE = "https://api.kde.org/frameworks/extra-cmake-modules/html/index.html"
LICENSE = "BSD-3-Clause"
PR = "r0"

DEPENDS = "cmake-native qttools"

inherit reuse_license_checksums

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"
CLEANBROKEN = "1"

do_compile() {
    cmake -DCMAKE_INSTALL_PREFIX:PATH=${D}/${prefix}/ .
    make
}

do_install() {
    make install
}

FILES_${PN}-dev += " ${datadir}/ECM"

BBCLASSEXTEND = "native nativesdk"
