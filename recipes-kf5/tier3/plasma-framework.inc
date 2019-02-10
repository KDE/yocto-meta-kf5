DESCRIPTION = "Plama Framework"
HOMEPAGE = "https://api.kde.org/plasma-framework/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING.LIB;md5=2d5025d4aa3495befef8f17206a5b0a1"
PR = "r0"

DEPENDS = " \
    qtbase \
    kactivities \
    karchive \
    kconfig \
    kconfigwidgets \
    kdbusaddons \
    kdeclarative \
    kglobalaccel \
    kguiaddons \
    kiconthemes \
    kio \
    kservice \
    kwindowsystem \
    kxmlgui \
    knotifications \
    kpackage \
    kwayland \
    kirigami \
    libxslt-native \
    karchive-native \
"

SRC_URI = " \
    git://anongit.kde.org/plasma-framework;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit ki18n

FILES_${PN} += " \
    ${libdir}/plugins/*.so \
    ${libdir}/plugins/kpackage/packagestructure/*.so \
    ${libdir}/plugins/plasma/scriptengines/*.so \
    ${libdir}/qml/org/kde/plasma/accessdenied/* \
    ${libdir}/qml/org/kde/plasma  \
    ${libdir}/qml/org/kde/kirigami.2 \
    ${libdir}/qml/QtQuick/Controls.2/Plasma \
    ${libdir}/qml/QtQuick/Controls/Styles/Plasma \
    ${datadir}/plasma/services/*.operations \
    ${datadir}/plasma/desktoptheme/air/* \
    ${datadir}/plasma/desktoptheme/air/*/* \
    ${datadir}/plasma/desktoptheme/breeze-dark/* \
    ${datadir}/plasma/desktoptheme/breeze-dark/*/* \
    ${datadir}/plasma/desktoptheme/breeze-light/* \
    ${datadir}/plasma/desktoptheme/breeze-light/*/* \
    ${datadir}/plasma/desktoptheme/default/* \
    ${datadir}/plasma/desktoptheme/default/*/* \
    ${datadir}/plasma/desktoptheme/oxygen/* \
    ${datadir}/plasma/desktoptheme/oxygen/*/* \
"
