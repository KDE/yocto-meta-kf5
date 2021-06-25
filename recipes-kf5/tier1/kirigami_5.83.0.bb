# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.83/kirigami2-5.83.0.tar.xz"
SRC_URI[sha256sum] = "5b8e667e49e349c0ea6e402f906ab542bae3e4cbf37a8a3d5a7848421eb6fc32"
S = "${WORKDIR}/kirigami2-${PV}"
