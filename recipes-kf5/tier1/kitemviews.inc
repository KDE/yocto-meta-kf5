DESCRIPTION = "KItemViews"
HOMEPAGE = "https://api.kde.org/frameworks/kitemviews/html/index.html"
LICENSE = "LGPL-2.0"
PR = "r0"

DEPENDS = "qtbase"

SRC_URI = "git://invent.kde.org/frameworks/${BPN};nobranch=1;protocol=https"
S = "${WORKDIR}/git"

inherit cmake_kf5
inherit reuse_license_checksums
