DESCRIPTION = "QQC2 Desktop Style"
HOMEPAGE = "https://api.kde.org/frameworks/qqc2-desktop-style/html/index.html"
LICENSE = "LGPL-3.0"
PR = "r0"

DEPENDS = " \
    qtbase \
    qtdeclarative \
    kirigami \
    kiconthemes \
    kconfigwidgets \
    kcoreaddons-native \
    kconfig-native \
    kauth-native \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums

FILES_${PN} += " \
    ${libdir}/plugins/kf5/kirigami/*.so \
    ${libdir}/qml/org/kde/qqc2desktopstyle/private/* \
    ${libdir}/qml/QtQuick/Controls.2/org.kde.desktop/* \
    ${libdir}/qml/QtQuick/Controls.2/org.kde.desktop/private/* \
"
