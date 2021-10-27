# SPDX-FileCopyrightText: 2018-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

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

require kdoctools_metainfo.inc
inherit cmake_kf5
inherit gettext
inherit python3native
inherit perlnative
inherit reuse_license_checksums

EXTRA_OECMAKE:class-native += " -DINSTALL_INTERNAL_TOOLS=ON"

EXTRA_OECMAKE:class-target += " \
    -DMEINPROC5_EXECUTABLE=${STAGING_DIR_NATIVE}/${bindir}/meinproc5 \
    -DDOCBOOKL10NHELPER_EXECUTABLE=${STAGING_DIR_NATIVE}/${bindir}/docbookl10nhelper \
    -DCHECKXML5_EXECUTABLE=${STAGING_DIR_NATIVE}/${bindir}/checkXML5 \
"

sysroot_stage_all:append:class-native () {
    mkdir -p ${SYSROOT_DESTDIR}${bindir}
    cp ${B}/bin/docbookl10nhelper ${SYSROOT_DESTDIR}${bindir}
}

sysroot_stage_all:append:class-target () {
    mkdir -p ${SYSROOT_DESTDIR}${bindir}
    cp ${STAGING_BINDIR_NATIVE}/checkXML5 ${SYSROOT_DESTDIR}${bindir}
    cp ${STAGING_BINDIR_NATIVE}/meinproc5 ${SYSROOT_DESTDIR}${bindir}
}


FILES:${PN} += " \
    ${datadir}/kf5/kdoctools/customization/* \
    ${datadir}/kf5/kdoctools/customization/*/* \
    ${datadir}/kf5/kdoctools/customization/*/*/* \
"
