# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.110/kirigami2-5.110.0.tar.xz"
SRC_URI[sha256sum] = "fd3dd9b0220570ee734cee50a18c7f5746ecd51a44ce77d549980f052df8498e"
S = "${WORKDIR}/kirigami2-${PV}"
