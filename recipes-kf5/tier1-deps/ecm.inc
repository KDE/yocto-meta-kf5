DESCRIPTION = "Extra CMake Modules"
HOMEPAGE = "https://projects.kde.org/projects/kdesupport/extra-cmake-modules"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://COPYING-CMAKE-SCRIPTS;md5=54c7042be62e169199200bc6477f04d1"
PR = "r0"

DEPENDS = "cmake-native qttools"

SRC_URI = "git://anongit.kde.org/extra-cmake-modules;protocol=git"
S = "${WORKDIR}/git"

do_compile() {
    cmake -DCMAKE_INSTALL_PREFIX:PATH=${D}/${prefix}/ .
    make
}

do_install() {
    make install
}

FILES_${PN}-dev += " ${datadir}/ECM"
