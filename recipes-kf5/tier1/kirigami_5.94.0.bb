# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.94/kirigami2-5.94.0.tar.xz"
SRC_URI[sha256sum] = "d7f27da3325feb339f4e1a3db78df44f05e4f505f36e15c7caeac04da0428e39"
S = "${WORKDIR}/kirigami2-${PV}"
