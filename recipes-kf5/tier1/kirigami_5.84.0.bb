# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.84/kirigami2-5.84.0.tar.xz"
SRC_URI[sha256sum] = "598c9e245d2726ada15c50d51f38827116f25d7e966af0cdfbb3bca396e01716"
S = "${WORKDIR}/kirigami2-${PV}"
