DESCRIPTION = "KDED"
HOMEPAGE = "https://api.kde.org/frameworks/kded/html/index.html"
LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = " \
    qtbase \
    kconfig \
    kconfig-native \
    kcoreaddons \
    kcoreaddons-native \
    kcrash \
    kdbusaddons \
    kio \
    kauth-native \
    kservice \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit kdoctools
inherit reuse_license_checksums

FILES_SOLIBSDEV = ""
FILES_${PN} += " \
    ${libdir}/libkdeinit5_kded5.so \
    ${libdir}/systemd/user/plasma-kded.service \
"
