DESCRIPTION = "All KDE Frameworks 5 packages"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

inherit packagegroup

RDEPENDS_${PN} = " \
    attica \
    bluez-qt \
    breeze-icons \
    karchive \
    kcodecs \
    kconfig \
    kcoreaddons \
    kdbusaddons \
    kdnssd \
    kguiaddons \
    ki18n \
    kidletime \
    kimageformats \
    kirigami \
    kitemmodels \
    kitemviews \
    kplotting \
    ksyntaxhighlighting \
    kwayland \
    kwidgetsaddons \
    kwindowsystem \
    modemmanager-qt \
    networkmanager-qt \
    oxygen-icons \
    prison \
    solid \
    sonnet \
    threadweaver \
    \
    kactivities \
    kauth \
    kcrash \
    kfilemetadata \
    kjobwidgets \
    knotifications \
    kpackage \
    kpty \
    kunitconversion \
    \
    baloo \
    kactivitiesstats \
    kbookmarks \
    kcmutils \
    kdeclarative \
    kded \
    kdesu \
    kemoticons \
    kglobalaccel \
    kiconthemes \
    kio \
    knewstuff \
    knotifyconfig \
    kparts \
    kpeople \
    krunner \
    kservice \
    ktexteditor \
    ktextwidgets \
    kwallet \
    kxmlgui \
    kxmlrpcclient \
    plasma-framework \
    qqc2-desktop-style \
    \
    kjs \
    kjsembed \
    kdelibs4support \
"
