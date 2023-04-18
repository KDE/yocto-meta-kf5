# Class for recipes using KAuth host tools
#
# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2023 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DEPENDS:append:class-target = " \
    kauth \
    kauth-native \
    polkit-qt-1 \
"

EXTRA_OECMAKE:append = " -DKF5_HOST_TOOLING=${STAGING_LIBDIR_NATIVE}/cmake"
