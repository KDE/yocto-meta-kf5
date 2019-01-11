DESCRIPTION = "Library for reading and writing data matrix barcodes"
HOMEPAGE = "http://libdmtx.sourceforge.net/"
LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=1c8a135723039c12792b01a2c688251b"

PR = "r0"

inherit autotools

SRC_URI = "https://github.com/dmtx/libdmtx/archive/v${PV}.tar.gz"
SRC_URI[md5sum] = "aee0184c1374242996c9991a3133ada9"
SRC_URI[sha256sum] = "15c6411f56cad4f58fa426f0ce96e0baf32b280af50082bd28edb651638e9c32"
