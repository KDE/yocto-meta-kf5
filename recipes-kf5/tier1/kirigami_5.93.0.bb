# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.93/kirigami2-5.93.0.tar.xz"
SRC_URI[sha256sum] = "a7c2a824eb776011ae9dc94698588e8c6988ac399669723631fab26edd47ab8f"
S = "${WORKDIR}/kirigami2-${PV}"
