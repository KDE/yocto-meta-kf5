# SPDX-FileCopyrightText: 2014 Johan Thelin <johan.thelin@pelagicore.com>
# SPDX-FileCopyrightText: 2016 Sébastien Taylor <sebastien@au-zone.com>
# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "BSD-2-Clause & LGPL-2.0+ & LGPL-2.1+ & (LGPL-2.1 | LGPL-3.0 | LicenseRef-KDE-Accepted-LGPL)"
PR = "r0"

DEPENDS = "qtbase"

require kimageformats_metainfo.inc
inherit cmake_kf6
inherit reuse_license_checksums

FILES:${PN}-dbg += " \
    ${libdir}/plugins/imageformats/.debug/*.so \
"

FILES:${PN} += " \
    ${libdir}/plugins/imageformats/*.so \
    ${datadir}/kservices5/qimageioplugins/*.desktop \
"
