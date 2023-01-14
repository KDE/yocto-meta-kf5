# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.102/kirigami2-5.102.0.tar.xz"
SRC_URI[sha256sum] = "178138e3ed5ff9f224856c03dc1b4e837c6ce05072da8287aad5970e2e9875b2"
S = "${WORKDIR}/kirigami2-${PV}"
