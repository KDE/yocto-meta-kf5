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
    ki18n \
    kiconthemes \
    kio \
    kservice \
    kwindowsystem \
    kxmlgui \
    knotifications \
    kpackage \
    kwayland \
"

SRC_URI = " \
    git://anongit.kde.org/plasma-framework;nobranch=1 \
"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit gettext
inherit python3native

FILES_${PN} += " \
    ${libdir}/plugins/*.so \
    ${libdir}/plugins/kpackage/packagestructure/*.so \
    ${libdir}/plugins/plasma/scriptengines/*.so \
    ${libdir}/qml/org/kde/plasma/accessdenied/* \
    ${libdir}/qml/org/kde/plasma/components.3/* \
    ${libdir}/qml/org/kde/plasma/extras/* \
    ${libdir}/qml/org/kde/plasma/extras/animations/* \
    ${libdir}/qml/org/kde/plasma/components/* \
    ${libdir}/qml/org/kde/plasma/components/private/* \
    ${libdir}/qml/org/kde/plasma/core/* \
    ${libdir}/qml/org/kde/plasma/core/private/* \
    ${libdir}/qml/org/kde/plasma/calendar/* \
    ${libdir}/qml/org/kde/plasma/platformcomponents/* \
    ${libdir}/qml/QtQuick/Controls.2/Plasma/* \
    ${libdir}/qml/QtQuick/Controls.2/Plasma/private/* \
    ${libdir}/qml/QtQuick/Controls/Styles/Plasma/* \
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
