DESCRIPTION = "BluezQt"
HOMEPAGE = "https://api.kde.org/frameworks/bluez-qt/html/index.html"
LICENSE = "LGPL-2.1"
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums

EXTRA_OECMAKE_class-target += " \
                  -DUDEV_RULES_INSTALL_DIR=${libdir}/udev/rules.d \
                  "

FILES_${PN} += " \
    ${libdir}/qml/org/kde/bluezqt/* \
"

RDEPENDS_${PN} += "bluez5"
