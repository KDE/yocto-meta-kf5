DESCRIPTION = "KCalendarCore"
HOMEPAGE = "https://api.kde.org/kdepim/kcalendarcore/html/index.html"
LICENSE = "LGPL-2"
LIC_FILES_CHKSUM = "file://COPYING;md5=c2d143c0ce3f53108f9725bcd58abf25"
PR = "r0"

DEPENDS = " \
    qtbase \
    libical \
"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
