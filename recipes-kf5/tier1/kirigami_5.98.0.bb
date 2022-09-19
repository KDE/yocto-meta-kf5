# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.98/kirigami2-5.98.0.tar.xz"
SRC_URI[sha256sum] = "46cf0701de6ace010c186e76654f3be8b9910a8167f7377cb1e5d57c337f0fd0"
S = "${WORKDIR}/kirigami2-${PV}"
