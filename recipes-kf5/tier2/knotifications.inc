DESCRIPTION = "KNotifications"
HOMEPAGE = "https://api.kde.org/frameworks/knotifications/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kwindowsystem \
    kconfig \
    kconfig-native \
    kcoreaddons \
    kcoreaddons-native \
    phonon \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums
