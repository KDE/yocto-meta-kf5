# SPDX-FileCopyrightText: 2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "MIT & (LGPL-2.1 | LGPL-3.0 | LicenseRef-KDE-Accepted-LGPL)"
PR = "r0"

DEPENDS = " \
    qtdeclarative \
    qtquickcontrols2 \
"

require kquickcharts_metainfo.inc
inherit cmake_kf6
inherit reuse_license_checksums

FILES:${PN} += " \
  ${libdir}/qml/org/kde/quickcharts \
"
