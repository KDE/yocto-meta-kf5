# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.86/kirigami2-5.86.0.tar.xz"
SRC_URI[sha256sum] = "ceec43a85c5d80b0fea3859bb0c152ead1209d0a62232832ce06be223b8c7de6"
S = "${WORKDIR}/kirigami2-${PV}"
