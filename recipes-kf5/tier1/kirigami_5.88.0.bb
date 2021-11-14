# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require ${PN}.inc
SRC_URI = "https://download.kde.org/stable/frameworks/5.88/kirigami2-5.88.0.tar.xz"
SRC_URI[sha256sum] = "190608bc49b75f38c3db81538a5f522e391c21b97398e615222449eefbf577fa"
S = "${WORKDIR}/kirigami2-${PV}"
