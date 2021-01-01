# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    kcoreaddons \
    kcoreaddons-native \
    ki18n \
    kconfig \
    kconfig-native \
    kio \
    kauth-native \
    kirigami \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

require purpose_metainfo.inc
inherit cmake_kf5
inherit gettext
inherit python3native
inherit kdoctools
inherit reuse_license_checksums

FILES_${PN} += " \
    ${libdir}/plugins/kf5/kfileitemaction \
    ${libdir}/plugins/kf5/purpose \
    ${libdir}/qml/org/kde/purpose \
    ${datadir}/icons/hicolor \
"
