# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    qtbase \
    kconfig \
    kconfig-native \
    kcoreaddons \
    kcoreaddons-native \
    kcrash \
    kdbusaddons \
    kio \
    kauth-native \
    kservice \
"

require kded_metainfo.inc
inherit cmake_kf6
inherit kdoctools
inherit reuse_license_checksums

FILES_SOLIBSDEV = ""
FILES:${PN} += " \
    ${libdir}/libkdeinit5_kded5.so \
    ${libdir}/systemd/user/plasma-kded.service \
"
