# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "QCA"
HOMEPAGE = "https://invent.kde.org/libraries/qca/"
LICENSE = "LGPL-2.1-only"
LIC_FILES_CHKSUM = "file://COPYING;md5=fbc093901857fcd118f065f900982c24"

DEPENDS = " \
    botan \
    cyrus-sasl \
    libgcrypt \
    nss \
    qtbase \
"

SRC_URI = "git://invent.kde.org/libraries/${BPN};nobranch=1;protocol=https"

inherit cmake_kf5
inherit pkgconfig

EXTRA_OECMAKE += " \
    -DQCA_FEATURE_INSTALL_DIR=${libdir}${QT_DIR_NAME}/mkspecs/features \
    -DLIB_SUFFIX=${@d.getVar('baselib').replace('lib', '')} \
"

FILES:${PN} += " \
    ${libdir}/qca-qt5/crypto/libqca-*.so \
"

FILES:${PN}-dev += " \
    ${libdir}/mkspecs/features/*  \
    ${libdir}/cmake/Qca-qt5/*.cmake \
"
