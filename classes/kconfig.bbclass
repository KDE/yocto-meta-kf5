# Class for recipes using kconfig host tools
#
# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

DEPENDS:append = " \
    kconfig \
    kconfig-native \
"

EXTRA_OECMAKE:append = " -DKF5_HOST_TOOLING=${STAGING_DIR_NATIVE}/${libdir}/cmake"
