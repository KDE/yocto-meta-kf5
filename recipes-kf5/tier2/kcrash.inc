DESCRIPTION = "KCrash"
HOMEPAGE = "https://api.kde.org/frameworks/kcrash/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1 \
    "
PR = "r0"

DEPENDS = "kcoreaddons kwindowsystem"

SRC_URI = " \
    git://anongit.kde.org/kcrash \
    file://0001-no-x11.patch \
"
S = "${WORKDIR}/git"

inherit cmake_kf5
