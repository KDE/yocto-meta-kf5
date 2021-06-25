# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = " \
    qtbase \
    karchive \
    kcoreaddons \
    kcoreaddons-native \
    kconfig \
    kconfig-native \
    kservice \
"

require kemoticons_metainfo.inc
inherit cmake_kf5
inherit reuse_license_checksums

FILES_${PN} += " \
    ${libdir}/plugins/kf5/*.so \
    ${libdir}/plugins/kf5/emoticonsthemes/*.so \
    ${datadir}/emoticons/Konqi/*.png \
    ${datadir}/emoticons/Konqi/emoticons.xml \
    ${datadir}/emoticons/EmojiOne/*.png \
    ${datadir}/emoticons/EmojiOne/emoticons.xml \
    ${datadir}/emoticons/Breeze/*.png \
    ${datadir}/emoticons/Breeze/emoticons.xml \
"
