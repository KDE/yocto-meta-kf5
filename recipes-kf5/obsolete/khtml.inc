# SPDX-FileCopyrightText: 2023 Justin Hammond <justin@dynam.ac>
#
# SPDX-License-Identifier: MIT

DESCRIPTION = "KHtml"
SUMMARY = "HTML rendering engine"
HOMEPAGE = "https://invent.kde.org/frameworks/khtml"
LICENSE = "GPL-3.0-only & LGPL-2.0-only"
LIC_FILES_CHKSUM = "file://COPYING.GPL3;md5=d32239bcb673463ab874e80d47fae504"

inherit cmake_plasma
inherit kcoreaddons
inherit ki18n

DEPENDS = " \
    karchive \
    kcompletion \
    kconfigwidgets \
    kcrash \
    kdbusaddons \
    kguiaddons \
    kiconthemes \
    kinit \
    kio \
    kitemviews \
    kjs \
    knotifications \
    kparts \
    kservice \
    ktextwidgets \
    kwallet \
    kwindowsystem \
    kxmlgui \
    phonon \
    kglobalaccel \
    giflib \
    gperf-native \
"

FILES:${PN} += " \
    ${datadir}/kf5/khtml \
"