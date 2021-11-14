# SPDX-FileCopyrightText: 2014 Johan Thelin <johan.thelin@pelagicore.com>
# SPDX-FileCopyrightText: 2016 Sébastien Taylor <sebastien@au-zone.com>
# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020-2021 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.0+ & (LGPL-2.1 | LGPL-3.0 | LicenseRef-KDE-Accepted-LGPL) & BSD-3-Clause"
PR = "r0"

DEPENDS:class-native += " \
    qtbase \
    gettext-native \
    extra-cmake-modules-native \
"
DEPENDS:class-target += " \
    qtdeclarative \
    gettext-native \
    extra-cmake-modules \
"

require ki18n_metainfo.inc
inherit cmake_kf5
inherit python3native
inherit reuse_license_checksums

EXTRA_OECMAKE:class-native += " -DBUILD_WITH_QTSCRIPT=OFF -DLibIntl_SEARCH_PATH=/usr/include"

FILES:${PN}-dbg += " \
    ${libdir}/plugins/kf5/.debug/ktranscript.so \
"

FILES:${PN} += " \
    ${libdir}/plugins/kf5/ktranscript.so \
    ${libdir}/qml/org/kde/i18n/localeData \
"
