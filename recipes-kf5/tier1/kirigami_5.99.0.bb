# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.99/kirigami2-5.99.0.tar.xz"
SRC_URI[sha256sum] = "b988ebaf93271951aa91ad28cd849d2496a5bb1ef07d425213a81cc0d4dd03e2"
S = "${WORKDIR}/kirigami2-${PV}"
