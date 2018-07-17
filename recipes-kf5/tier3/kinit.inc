DESCRIPTION = "KInit"
HOMEPAGE = "https://api.kde.org/frameworks/kinit/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kservice \
    kio \
    ki18n \
    kwindowsystem \
    kcrash \
    kconfig \
    libxslt-native \
"

SRC_URI = " \
    git://anongit.kde.org/kinit;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit gettext
inherit python3native

FILES_SOLIBSDEV = ""
FILES_${PN} += " \
    ${libdir}/libkdeinit5_klauncher.so \
"
