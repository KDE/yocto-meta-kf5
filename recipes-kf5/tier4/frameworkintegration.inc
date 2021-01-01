# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    qtbase \
    kconfig \
    kconfig-native \
    kconfigwidgets \
    kcoreaddons-native \
    kauth-native \
    kiconthemes \
    knotifications \
    kwidgetsaddons \
    kpackage \
    kpackage-native \
    knewstuff \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

require frameworkintegration_metainfo.inc
inherit cmake_kf5
inherit ki18n
inherit kdoctools
inherit reuse_license_checksums

FILES_${PN} += " \
    ${libdir}/plugins/kf5/FrameworkIntegrationPlugin.so \
    ${datadir}/kf5/infopage \
"
