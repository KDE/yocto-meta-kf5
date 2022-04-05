# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
# SPDX-FileCopyrightText: 2022 MBition GmbH
# SPDX-FileContributor: Kai Uwe Broulik <kai_uwe.broulik@mbition.io>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.0+"
LICENSE:${PN}-tools = "GPL-2.0+"
PR = "r0"

DEPENDS = " \
    qtbase \
    karchive \
    kcoreaddons \
    kpackage-native \
"

PACKAGES =+ "${PN}-tools"

RRECOMMENDS:${BPN} += "${BPN}-tools"

FILES:${PN}-tools += "\
    ${bindir}/kpackagetool5 \
"

require kpackage_metainfo.inc
inherit cmake_kf5
inherit ki18n
inherit reuse_license_checksums
