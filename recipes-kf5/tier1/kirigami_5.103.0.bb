# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.103/kirigami2-5.103.0.tar.xz"
SRC_URI[sha256sum] = "a6667f221e7777fb49ffb6c44407f55ac691e14fbdf4fe3f0051201078c83744"
S = "${WORKDIR}/kirigami2-${PV}"
