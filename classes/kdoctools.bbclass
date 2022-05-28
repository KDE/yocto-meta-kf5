# Class for recipes using kdoctools to build their documentation
#
# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

do_compile:prepend() {
    # meinproc5 needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
}

DEPENDS:append = " \
    kdoctools \
    kdoctools-native \
    libxslt-native \
    karchive-native \
"

EXTRA_OECMAKE:append = " -DKF5_HOST_TOOLING=${STAGING_DIR_NATIVE}/${libdir}/cmake"
