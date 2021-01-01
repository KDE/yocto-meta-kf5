# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    qtbase \
    ki18n \
    kio \
    kcoreaddons-native \
    kconfig-native \
    kauth-native \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

require kxmlrpcclient_metainfo.inc
inherit cmake_kf5
inherit gettext
inherit python3native
inherit kdoctools
inherit reuse_license_checksums
