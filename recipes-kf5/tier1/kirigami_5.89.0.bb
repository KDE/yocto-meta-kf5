# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.89/kirigami2-5.89.0.tar.xz"
SRC_URI[sha256sum] = "285d770f1444b3f364282fefd4018ad99a94017f6aa22302ba0c1e082960c5ca"
S = "${WORKDIR}/kirigami2-${PV}"
