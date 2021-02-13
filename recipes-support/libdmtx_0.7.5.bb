# SPDX-FileCopyrightText: 2017 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "Library for reading and writing data matrix barcodes"
HOMEPAGE = "http://libdmtx.sourceforge.net/"
LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=1c8a135723039c12792b01a2c688251b"

PR = "r0"

inherit autotools

SRC_URI = "https://github.com/dmtx/libdmtx/archive/v${PV}.tar.gz"
SRC_URI[md5sum] = "82edcd68e9f4fa779f5f7573baf2a9f5"
SRC_URI[sha256sum] = "be0c5275695a732a5f434ded1fcc232aa63b1a6015c00044fe87f3a689b75f2e"
