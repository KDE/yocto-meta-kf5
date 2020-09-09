DESCRIPTION = "KDocTools"
HOMEPAGE = "https://api.kde.org/frameworks/kdoctools/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = " \
    karchive \
    ki18n \
    libxslt \
    libxml2 \
    libxml2-native \
    docbook-xml-dtd4 \
    docbook-xsl-stylesheets \
    liburi-perl-native \
    kdoctools-native \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit gettext
inherit python3native
inherit perlnative
inherit reuse_license_checksums

EXTRA_OECMAKE_class-native += " -DINSTALL_INTERNAL_TOOLS=ON"

EXTRA_OECMAKE_class-target += " \
    -DMEINPROC5_EXECUTABLE=${STAGING_DIR_NATIVE}/${bindir}/meinproc5 \
    -DDOCBOOKL10NHELPER_EXECUTABLE=${STAGING_DIR_NATIVE}/${bindir}/docbookl10nhelper \
    -DCHECKXML5_EXECUTABLE=${STAGING_DIR_NATIVE}/${bindir}/checkXML5 \
"

sysroot_stage_all_append_class-native () {
    mkdir -p ${SYSROOT_DESTDIR}${bindir}
    cp ${B}/bin/docbookl10nhelper ${SYSROOT_DESTDIR}${bindir}
}

sysroot_stage_all_append_class-target () {
    mkdir -p ${SYSROOT_DESTDIR}${bindir}
    cp ${STAGING_BINDIR_NATIVE}/checkXML5 ${SYSROOT_DESTDIR}${bindir}
    cp ${STAGING_BINDIR_NATIVE}/meinproc5 ${SYSROOT_DESTDIR}${bindir}
}


FILES_${PN} += " \
    ${datadir}/kf5/kdoctools/customization/* \
    ${datadir}/kf5/kdoctools/customization/*/* \
    ${datadir}/kf5/kdoctools/customization/*/*/* \
"
