# SPDX-FileCopyrightText: 2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

# note: autotests contain LGPL-3.0-or-later
LICENSE = "BSD-3-Clause & LGPL-2.0+"
PR = "r0"

DEPENDS = " \
    qtbase \
    libical \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

require kcalendarcore_metainfo.inc
inherit cmake_kf5
inherit reuse_license_checksums
