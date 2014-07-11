DESCRIPTION = "Extra CMake Modules"
HOMEPAGE = "https://projects.kde.org/projects/kdesupport/extra-cmake-modules"
LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://COPYING-CMAKE-SCRIPTS;md5=54c7042be62e169199200bc6477f04d1 \
    "
PR = "r0"

DEPENDS = "cmake-native qttools"

GIT_REPO = "git://anongit.kde.org/extra-cmake-modules;protocol=git"
S = "${WORKDIR}/git"

do_compile() {
    cmake -DCMAKE_INSTALL_PREFIX:PATH=${D}/usr/ .
    make
}

do_install() {
    make install
}

FILES_${PN} += " \
    ${base_prefix}/usr/share/ECM/kde-modules/* \
    ${base_prefix}/usr/share/ECM/modules/* \
    ${base_prefix}/usr/share/ECM/cmake/* \
    ${base_prefix}/usr/share/ECM/find-modules/* \
"
