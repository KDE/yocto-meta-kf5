# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.104/kirigami2-5.104.0.tar.xz"
SRC_URI[sha256sum] = "a037e45d7b1323c53f67562ebcfda0accd14385282fc59ce967accceab0bdab1"
S = "${WORKDIR}/kirigami2-${PV}"
