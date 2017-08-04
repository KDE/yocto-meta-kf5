DESCRIPTION = "Library for reading and writing data matrix barcodes"
HOMEPAGE = "http://libdmtx.sourceforge.net/"
LICENSE = "BSD-2-Clause"
LIC_FILES_CHKSUM = "file://LICENSE;md5=1c8a135723039c12792b01a2c688251b"

PR = "r0"

inherit autotools

SRC_URI = "${SOURCEFORGE_MIRROR}/libdmtx/libdmtx/${PV}/libdmtx-${PV}.tar.gz"
SRC_URI[md5sum] = "9d9d87f489f0d5b3727d00b784e04c33"
SRC_URI[sha256sum] = "686bcfb44e50b96345aa53f41e285f2118a2cf87a333b69b74165a2e7ddca492"
