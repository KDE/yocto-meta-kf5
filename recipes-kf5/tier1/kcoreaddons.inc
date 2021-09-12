# SPDX-FileCopyrightText: 2014 Johan Thelin <johan.thelin@pelagicore.com>
# SPDX-FileCopyrightText: 2016 Sébastien Taylor <sebastien@au-zone.com>
# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

REUSE_LICENSECHECK_WHITELIST = "CC0-1.0"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase kcoreaddons-native"

require kcoreaddons_metainfo.inc
inherit cmake_kf5
inherit reuse_license_checksums
inherit mime-xdg

FILES_${PN} += " \
    ${datadir}/mime/packages/kde5.xml \
    ${datadir}/kf5/licenses/* \
"

FILES_${PN}-dev += " \
    ${bindir}/desktoptojson \
"
