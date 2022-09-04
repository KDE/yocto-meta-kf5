# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.97/kirigami2-5.97.0.tar.xz"
SRC_URI[sha256sum] = "449edf327ecce026443bbf30552ba86b4fe94806d2f5ce3fa19491e1aef0d604"
S = "${WORKDIR}/kirigami2-${PV}"
