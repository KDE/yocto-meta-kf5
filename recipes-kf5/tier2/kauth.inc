DESCRIPTION = "KAuth"
HOMEPAGE = "https://api.kde.org/frameworks/kauth/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS_class-native = "extra-cmake-modules qtbase-native kcoreaddons-native"
DEPENDS_class-target = "qtbase kcoreaddons kauth-native polkit-qt-1"

SRC_URI = " \
    git://anongit.kde.org/kauth;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_kf5

EXTRA_OECMAKE_class-native += " \
    -DKAUTH_BUILD_CODEGENERATOR_ONLY=ON \
    -DKAUTH_BACKEND_NAME=POLKITQT5-1 \
    -DKAUTH_POLICY_FILES_INSTALL_DIR=${datadir}/polkit-1/actions \
"

sysroot_stage_all_append_class-target () {
    mkdir -p ${SYSROOT_DESTDIR}${libexecdir}/kauth
    cp ${STAGING_LIBEXECDIR_NATIVE}/kauth/kauth-policy-gen ${SYSROOT_DESTDIR}/${libexecdir}/kauth
}

FILES_${PN} += " \
    ${libdir}/plugins/kauth/helper/kauth_helper_plugin.so \
    ${libdir}/plugins/kauth/backend/kauth_backend_plugin.so \
    ${datadir}/kf5/kauth/*.stub \
"

FILES_${PN}-dev += " \
    ${libexecdir}/kauth/kauth-policy-gen \
"
