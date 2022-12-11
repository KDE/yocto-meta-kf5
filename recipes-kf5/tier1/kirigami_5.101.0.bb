# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.101/kirigami2-5.101.0.tar.xz"
SRC_URI[sha256sum] = "7608eeb528ee863441270cb5896628f8f592dcf09ad00d5bd76d5f7dc1578fbd"
S = "${WORKDIR}/kirigami2-${PV}"
