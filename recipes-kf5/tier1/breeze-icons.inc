# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

require breeze-icons_metainfo.inc
inherit cmake_kf5
# bash is in the hosttools folder in PATH, but that's not detected automatically
# due to the CMAKE_FIND_ROOT_PATH settings
EXTRA_OECMAKE_class-target += " -DBASH_EXE=`which bash`"

FILES_${PN} += " \
    ${datadir}/icons/breeze \
    ${datadir}/icons/breeze-dark \
"
