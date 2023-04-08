# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.105/kirigami2-5.105.0.tar.xz"
SRC_URI[sha256sum] = "36c2fe1662f4bdb82e2e709777aad82576724612dc35bfd1ecbb507d20f585dc"
S = "${WORKDIR}/kirigami2-${PV}"
