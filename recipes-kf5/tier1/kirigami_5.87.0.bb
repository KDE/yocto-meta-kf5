# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.87/kirigami2-5.87.0.tar.xz"
SRC_URI[sha256sum] = "f1876cc3d0774ea3a6f44f177ea5d86742f952eab4d2ac4498a1b5b0ac0572f3"
S = "${WORKDIR}/kirigami2-${PV}"
