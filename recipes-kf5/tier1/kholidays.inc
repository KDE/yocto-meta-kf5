# SPDX-FileCopyrightText: 2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS += "qtbase"

require kholidays_metainfo.inc
inherit cmake_kf5
inherit reuse_license_checksums

FILES_${PN} += " \
    ${libdir}/qml/org/kde/kholidays \
    ${datadir}/kf5/libkholidays \
"
