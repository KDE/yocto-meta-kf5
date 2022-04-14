# Class for recipes using kcoreaddons host tools
#
# SPDX-FileCopyrightText: 2019 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2022 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

DEPENDS:append = " \
    kcoreaddons \
    kcoreaddons-native \
"

# for crosscompilation desktoptojson uses CMAKE_SYSROOT as root path for locating files
EXTRA_OECMAKE:append = " \
    -DKF5_HOST_TOOLING=${STAGING_DIR_NATIVE}/${libdir}/cmake \
    -DCMAKE_SYSROOT=${RECIPE_SYSROOT} \
"
