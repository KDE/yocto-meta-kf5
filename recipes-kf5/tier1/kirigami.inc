# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    qtquickcontrols2 \
    qtsvg \
"

require kirigami_metainfo.inc
inherit cmake_kf5
inherit reuse_license_checksums

FILES:${PN} += " \
    ${libdir}/qml/org/kde/kirigami.2 \
"

RDEPENDS:${PN} += " \
    qtgraphicaleffects-qmlplugins \
    qtquickcontrols2-qmlplugins \
"
