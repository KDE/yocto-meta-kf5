# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.109/kirigami2-${PV}.tar.xz"
SRC_URI[sha256sum] = "cc8b6b188c1863011355dbec8971c754c2c75bc2687fe00e5192066fd0cfc0fd"
S = "${WORKDIR}/kirigami2-${PV}"
