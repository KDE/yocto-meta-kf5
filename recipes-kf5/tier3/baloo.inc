# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018-2020 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1-only"
PR = "r0"

SRC_URI:append:riscv64 = " \
    file://0001-we-cant-mmap-such-a-large-memory-on-riscv64.patch \
"

DEPENDS = " \
    libxml2-native \
    qtbase \
    qtdeclarative \
    kcoreaddons \
    kcoreaddons-native \
    kconfig \
    kconfig-native \
    kdbusaddons \
    kidletime \
    solid \
    kfilemetadata \
    kcrash \
    kio \
    kauth-native \
    lmdb \
"

require baloo_metainfo.inc
inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums

FILES:${PN} += " \
    ${libdir}/plugins/kf5/kio/*.so \
    ${libdir}/plugins/kf5/kded/*.so \
    ${libdir}/systemd/user/* \
    ${libdir}/qml/org/kde/baloo/* \
    ${libdir}/qml/org/kde/baloo/experimental/* \
    ${datadir}/icons/hicolor/128x128/apps/baloo.png \
"
PRIVATE_LIBS += " \
    liblmdb.so.* \
"

RDEPENDS:${PN} += "lmdb"
