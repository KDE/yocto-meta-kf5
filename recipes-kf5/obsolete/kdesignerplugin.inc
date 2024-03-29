# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kcoreaddons \
    kconfig \
    kdesignerplugin-native \
"
RDEPENDS:${PN}:class-native += " \
    kconfig \
    kcoreaddons \
"

require kdesignerplugin_metainfo.inc
inherit cmake_kf5

FILES:${PN}-dev += " \
  ${datadir}/kf5/widgets/pics/*.png \
"

do_install:append:class-target() {
    if [ "0" -ne $(find . -name \*.cmake | grep '_usr\|Export' | grep 'noconfig' | wc -l) ]; then
        sed -i 's#'\$\{_IMPORT_PREFIX\}'#\$\{OE_KF5_PATH_HOST_ROOT\}/usr/#g' $(find . -name "*.cmake" | grep '_usr\|Export' | grep 'noconfig' )
    fi
}


sysroot_stage_all:append:class-target () {
    mkdir -p ${SYSROOT_DESTDIR}${bindir}
    cp ${STAGING_BINDIR_NATIVE}/kgendesignerplugin ${SYSROOT_DESTDIR}/${bindir}
}

FILES:${PN}-dev += " \
    ${bindir}/kgendesignerplugin \
"
