# SPDX-FileCopyrightText: 2017-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

require bluez-qt_metainfo.inc
inherit cmake_kf5
inherit reuse_license_checksums

EXTRA_OECMAKE_class-target += " \
                  -DUDEV_RULES_INSTALL_DIR=${libdir}/udev/rules.d \
                  "

FILES_${PN} += " \
    ${libdir}/qml/org/kde/bluezqt/* \
"

RDEPENDS_${PN} += "bluez5"
