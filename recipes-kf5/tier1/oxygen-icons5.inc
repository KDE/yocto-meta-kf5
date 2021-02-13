# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

SRC_URI = "git://invent.kde.org/frameworks/oxygen-icons5;nobranch=1;protocol=https"
S = "${WORKDIR}/git"

require oxygen-icons5_metainfo.inc
inherit cmake_kf5

FILES_${PN} += " \
    ${datadir}/icons/oxygen/index.theme \
    ${datadir}/icons/oxygen/base/*/*/*.png \
"