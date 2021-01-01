# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018-2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = " \
    libxml2-native \
    qtbase \
    qtdeclarative \
    karchive \
    kcompletion \
    kconfig \
    kconfig-native \
    kcoreaddons \
    kcoreaddons-native \
    kiconthemes \
    kio \
    kauth-native \
    kitemviews \
    kservice \
    ktextwidgets \
    kwidgetsaddons \
    kxmlgui \
    attica \
    kpackage \
    kpackage-native \
    kirigami \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

require knewstuff_metainfo.inc
inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums

FILES_${PN} += " \
    ${libdir}/qml/org/kde/newstuff/* \
    ${libdir}/qml/org/kde/newstuff/qml/* \
    ${datadir}/kf5/knewstuff/pics/*.png \
    ${datadir}/kf5/kmoretools/presets-kmoretools/* \
"
