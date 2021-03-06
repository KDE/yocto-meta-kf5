# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.0"
PR = "r0"

SRC_URI_append = " \
    file://0001-Fix-compile-error-with-std-ceil-namespace.patch \
"

DEPENDS = " \
    qtbase \
    karchive \
    kdbusaddons \
    kservice \
    solid \
    kbookmarks \
    kcompletion \
    kconfigwidgets \
    kiconthemes \
    kitemviews \
    kjobwidgets \
    kwidgetsaddons \
    kwindowsystem \
"

require kio_metainfo.inc
inherit cmake_kf5
inherit kcoreaddons
inherit kconfig
inherit ki18n
inherit kdoctools
inherit kauth
inherit mime-xdg
inherit reuse_license_checksums

FILES_${PN} += " \
    ${libdir}/plugins/kcm_*.so \
    ${libdir}/plugins/kf5/kio/*.so \
    ${libdir}/plugins/kf5/kded/*.so \
    ${libdir}/plugins/kf5/kiod/*.so \
    ${libdir}/plugins/kf5/urifilters/*.so \
    ${datadir}/kservices5/useragentstrings/*.desktop \
    ${datadir}/kservices5/searchproviders/*.desktop \
    ${datadir}/kf5/kcookiejar/domain_info \
    ${datadir}/kconf_update \
"

RDEPENDS_${PN} += " \
    ca-certificates \
"
