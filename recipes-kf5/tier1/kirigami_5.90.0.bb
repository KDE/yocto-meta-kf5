# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.90/kirigami2-5.90.0.tar.xz"
SRC_URI[sha256sum] = "2b39c24cb553f7ad6b1fb8babc54a3055e51344b81c21b82d3d88f7d43b08864"
S = "${WORKDIR}/kirigami2-${PV}"
