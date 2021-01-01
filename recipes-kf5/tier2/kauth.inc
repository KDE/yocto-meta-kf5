# SPDX-FileCopyrightText: 2014 Johan Thelin <johan.thelin@pelagicore.com>
# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS_class-native = "extra-cmake-modules qtbase-native kcoreaddons-native"
DEPENDS_class-target = "qtbase kcoreaddons kauth-native polkit-qt-1"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

require kauth_metainfo.inc
inherit cmake_kf5
inherit reuse_license_checksums

EXTRA_OECMAKE_class-target += " \
    -DKAUTH_BACKEND_NAME=POLKITQT5-1 \
"

EXTRA_OECMAKE_class-native += " \
    -DKAUTH_BACKEND_NAME=POLKITQT5-1 \
    -DKAUTH_BUILD_CODEGENERATOR_ONLY=ON \
    -DKAUTH_POLICY_FILES_INSTALL_DIR=${datadir}/polkit-1/actions \
"

FILES_${PN} += " \
    ${libdir}/plugins/kauth/helper/kauth_helper_plugin.so \
    ${libdir}/plugins/kauth/backend/kauth_backend_plugin.so \
    ${datadir}/kf5/kauth/*.stub \
"

FILES_${PN}-dev += " \
    ${libexecdir}/kauth/kauth-policy-gen \
"
