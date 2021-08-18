# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.85/kirigami2-5.85.0.tar.xz"
SRC_URI[sha256sum] = "33d22381cf6058c3dc54109e31f710f07452ef9baf669d4264659c5c7fd7ad2b"
S = "${WORKDIR}/kirigami2-${PV}"
