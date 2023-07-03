# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.107/kirigami2-5.107.0.tar.xz"
SRC_URI[sha256sum] = "f5c3d1363ddde13c977f6f6c747cb0b34ac6fb647134ef9e9c1c24474e0cb9c9"
S = "${WORKDIR}/kirigami2-${PV}"
