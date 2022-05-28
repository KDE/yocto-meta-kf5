# Class for recipes using KAuth host tools
#
# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DEPENDS:append = " \
    kauth \
    kauth-native \
    polkit-qt-1 \
"

EXTRA_OECMAKE:append = " -DKF5_HOST_TOOLING=${STAGING_DIR_NATIVE}/${libdir}/cmake"
