# SPDX-FileCopyrightText: 2014 Johan Thelin <johan.thelin@pelagicore.com>
# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1 & LGPL-2.0+ & BSD-3-Clause"
PR = "r0"

DEPENDS += " \
    extra-cmake-modules \
    qtbase \
    qt5compat \
    kcoreaddons \
"
DEPENDS:append:class-target = " \
    kauth-native \
    polkit-qt-1 \
"

require kauth_metainfo.inc
inherit cmake_kf6
inherit reuse_license_checksums

EXTRA_OECMAKE:append:class-target = " \
    -DKAUTH_BACKEND_NAME=POLKITQT5-1 \
"

EXTRA_OECMAKE:append:class-native = " \
    -DKAUTH_BUILD_CODEGENERATOR_ONLY=ON \
    -DKAUTH_POLICY_FILES_INSTALL_DIR=${datadir}/polkit-1/actions \
"

FILES:${PN} += " \
    ${libdir}/plugins/kf6/kauth/helper/kauth_helper_plugin.so \
    ${libdir}/plugins/kauth/backend/kauth_backend_plugin.so \
    ${datadir}/kf6/kauth/*.stub \
"

FILES:${PN}-dev += " \
    ${libexecdir}/kauth/kauth-policy-gen \
"
