# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2018 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

REUSE_LICENSECHECK_WHITELIST = "Qt-Commercial-exception-1.0 CC0-1.0"
LICENSE = "LGPL-2.0 & (LGPL-2.1 | LGPL-3.0 | LicenseRef-KDE-Accepted-LGPL) & BSD-2-Clause & BSD-3-Clause & MIT & (GPL-2.0 | GPL-3.0 | LicenseRef-KDE-Accepted-GPL)"
PR = "r0"

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
    ktextwidgets \
    kwallet \
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

# handling symlink: /usr/lib/plugins/plasma/kcms/systemsettings_qwidgets/kcm_webshortcuts.so
INSANE_SKIP:${PN} = "dev-so"
FILES:${PN} += " \
    ${libdir}/plugins/kcm_*.so \
    ${libdir}/plugins/kf5/kio/*.so \
    ${libdir}/plugins/kf5/kded/*.so \
    ${libdir}/plugins/kf5/kiod/*.so \
    ${libdir}/plugins/kf5/urifilters/*.so \
    ${libdir}/plugins/plasma/kcms/systemsettings/*.so \
    ${libdir}/plugins/plasma/kcms/systemsettings_qwidgets/*.so \
    ${datadir}/kservices5/useragentstrings/*.desktop \
    ${datadir}/kservices5/searchproviders/*.desktop \
    ${datadir}/kf5/kcookiejar/domain_info \
    ${datadir}/kconf_update \
"

RDEPENDS:${PN} += " \
    ca-certificates \
"
