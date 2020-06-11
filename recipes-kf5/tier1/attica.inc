DESCRIPTION = "Attica"
HOMEPAGE = "https://api.kde.org/frameworks/attica/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING;md5=be254b9345b1c2ff33e1a6a96768f2fb \
    "
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
