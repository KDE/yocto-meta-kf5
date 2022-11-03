# SPDX-FileCopyrightText: 2014 Johan Thelin <johan.thelin@pelagicore.com>
# SPDX-FileCopyrightText: 2016 Sébastien Taylor <sebastien@au-zone.com>
# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "MIT & BSD-3-Clause & LGPL-2.0+ & LGPL-2.0"
PR = "r0"

DEPENDS += " \
    qtbase \
    qt5compat \
    gperf-native \
"

require kcodecs_metainfo.inc
inherit cmake_kf6
inherit reuse_license_checksums
