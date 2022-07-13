# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.96/kirigami2-5.96.0.tar.xz"
SRC_URI[sha256sum] = "7be27fbf33d6690dc3e23dae33f58f0c68a97b902a27298858c050691326398a"
S = "${WORKDIR}/kirigami2-${PV}"
