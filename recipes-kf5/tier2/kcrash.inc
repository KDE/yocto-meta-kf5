# SPDX-FileCopyrightText: 2014 Johan Thelin <johan.thelin@pelagicore.com>
# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

REUSE_LICENSECHECK_WHITELIST = "CC0-1.0"
LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    kcoreaddons \
    kcoreaddons-native \
    kwindowsystem \
"

require kcrash_metainfo.inc
inherit cmake_kf6
inherit reuse_license_checksums
