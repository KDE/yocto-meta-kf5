DESCRIPTION = "Attica"
HOMEPAGE = "http://api.kde.org/frameworks-api/frameworks5-apidocs/attica/html/index.html"
LICENSE = "LGPL-2.1"
LIC_FILES_CHKSUM = "file://COPYING;md5=be254b9345b1c2ff33e1a6a96768f2fb \
    "
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = "git://anongit.kde.org/attica"
S = "${WORKDIR}/git"

inherit cmake_kf5
