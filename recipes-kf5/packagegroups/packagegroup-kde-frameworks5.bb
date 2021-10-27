# SPDX-FileCopyrightText: 2019-2020 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2019 Alistair Francis <alistair.francis@wdc.com>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

SUMMARY = "All KDE Frameworks 5 packages"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

PACKAGE_ARCH = "${MACHINE_ARCH}"

inherit packagegroup features_check

REQUIRED_DISTRO_FEATURES = "wayland x11"

RDEPENDS:${PN} = " \
    attica \
    bluez-qt \
    breeze-icons \
    karchive \
    kcalendarcore \
    kcodecs \
    kconfig \
    kcoreaddons \
    kdbusaddons \
    kdnssd \
    kguiaddons \
    kholidays \
    ki18n \
    kidletime \
    kimageformats \
    kirigami \
    kitemmodels \
    kitemviews \
    kplotting \
    kquickcharts \
    syntax-highlighting \
    kwayland \
    kwidgetsaddons \
    kwindowsystem \
    modemmanager-qt \
    networkmanager-qt \
    oxygen-icons5 \
    prison \
    solid \
    sonnet \
    threadweaver \
    \
    kactivities \
    kauth \
    kcontacts \
    kcrash \
    kdoctools \
    kfilemetadata \
    kjobwidgets \
    knotifications \
    kpackage \
    kpty \
    kunitconversion \
    syndication \
    \
    baloo \
    kactivities-stats \
    kbookmarks \
    kcmutils \
    kdav \
    kdeclarative \
    kded \
    kdesu \
    kemoticons \
    kglobalaccel \
    kiconthemes \
    kinit \
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
    purpose \
    qqc2-desktop-style \
    \
    frameworkintegration \
    \
    kjs \
    kjsembed \
    kdelibs4support \
"
