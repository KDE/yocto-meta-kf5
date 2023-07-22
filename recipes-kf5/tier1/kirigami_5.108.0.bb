# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.108/kirigami2-5.108.0.tar.xz"
SRC_URI[sha256sum] = "77d9d13ab1188fc699914245b4bd6eb8bf1a44fb879e4fe84c3c9980f7c47f4d"
S = "${WORKDIR}/kirigami2-${PV}"
