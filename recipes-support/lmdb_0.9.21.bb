SUMMARY = "Lightning Memory-Mapped Database (LMDB)"
HOMEPAGE = "https://symas.com/lightning-memory-mapped-database/"
LICENSE = "OLDAP-2.8"
LIC_FILES_CHKSUM = "file://LICENSE;md5=153d07ef052c4a37a8fac23bc6031972"

SRC_URI = "git://github.com/LMDB/lmdb.git;nobranch=1"
SRCREV = "LMDB_${PV}"

inherit base

S = "${WORKDIR}/git/libraries/liblmdb"

do_compile() {
    oe_runmake CC="${CC}" SOEXT="-${PV}.so" LDFLAGS="-Wl,-soname,lib${PN}-${PV}.so"
}

do_install() {
    oe_runmake CC="${CC}" DESTDIR="${D}" prefix="${prefix}" libprefix="${libdir}" manprefix="${mandir}" SOEXT="-${PV}.so" LDFLAGS="-Wl,-soname,lib${PN}-${PV}.so" install
    cd ${D}/${libdir}
    ln -s liblmdb-${PV}.so liblmdb.so
    rm liblmdb.a
}

FILES_SOLIBSDEV = ""
FILES_${PN} += " \
    ${libdir}/lib${PN}-${PV}.so \
"

FILES_${PN}-dev += " \
    ${bindir}/mdb_* \
    ${libdir}/lib${PN}.so \
"

INSANE_SKIP += "ldflags"
