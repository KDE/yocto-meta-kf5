# SPDX-FileCopyrightText: 2014 Johan Thelin <johan.thelin@pelagicore.com>
# SPDX-FileCopyrightText: 2016 Sébastien Taylor <sebastien@au-zone.com>
# SPDX-FileCopyrightText: 2017-2019 Volker Krause <vkrause@kde.org>
#
# SPDX-License-Identifier: MIT

inherit qt6-cmake
inherit pkgconfig

EXTRA_OECMAKE:append:class-native = " \
    -DOE_KF5_PATH_HOST_ROOT=${STAGING_DIR_HOST} \
    -DBUILD_TESTING=OFF \
    -DBUILD_DESIGNERPLUGIN=OFF \
    -DBUILD_WITH_QT6=ON \
    -DEXCLUDE_DEPRECATED_BEFORE_AND_AT=5.94.0 \
    -DQT_MAJOR_VERSION=6 \
"

EXTRA_OECMAKE:append:class-target = " \
    -DOE_KF5_PATH_HOST_ROOT=${STAGING_DIR_HOST} \
    -DBUILD_TESTING=OFF \
    -DKF5_HOST_TOOLING=${STAGING_DIR_NATIVE}/${libdir}/cmake \
    -DBUILD_DESIGNERPLUGIN=OFF \
    -DBUILD_WITH_QT6=ON \
    -DEXCLUDE_DEPRECATED_BEFORE_AND_AT=5.94.0 \
    -DQT_MAJOR_VERSION=6 \
"

DEPENDS:append = " \
    extra-cmake-modules \
    qttools-native \
"

# don't bother with translations for host tools
do_configure:prepend:class-native() {
    rm -rf ${S}/po
}

do_compile:prepend() {
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
    export LD_LIBRARY_PATH=${STAGING_LIBDIR_NATIVE}:$LD_LIBRARY_PATH
}

# This function is rather offensive right now, but it seems to work
do_install:prepend() {
    if [ "0" -ne $(find . -name \*.cmake | grep _usr | wc -l) ]; then
        sed -i 's/\"\/usr\//\"\$\{OE_KF5_PATH_HOST_ROOT\}\/usr\//g' $(find . -name "*.cmake" | grep _usr)
        sed -i 's/\;\/usr\//\;\$\{OE_KF5_PATH_HOST_ROOT\}\/usr\//g' $(find . -name "*.cmake" | grep _usr)
    fi
}

BBCLASSEXTEND = "native nativesdk"

FILES:${PN}:append = " \
    ${datadir}/dbus-1/services/*.service \
    ${datadir}/dbus-1/system-services/*.service \
    ${datadir}/dbus-1/system.d/*.conf \
    ${datadir}/knotifications6/*.notifyrc \
    ${datadir}/kservices6/*.desktop \
    ${datadir}/kservices6/*.protocol \
    ${datadir}/kservicetypes6/*.desktop \
    ${datadir}/kservices6/*.desktop \
    ${datadir}/polkit-1/actions/*.policy \
"

# TODO "${datadir}/kdevappwizard/templates/*.tar.bz2" is deprecated, remove when all frameworks are ported away
FILES:${PN}-dev:append = " \
    ${datadir}/dbus-1/interfaces/*.xml \
    ${datadir}/kdevappwizard/templates/*.tar.bz2 \
    ${datadir}/kdevfiletemplates/templates/*.tar.bz2 \
    ${datadir}/qlogging-categories6 \
    ${libdir}/cmake \
    ${libdir}/plugins/designer/*.so \
    ${prefix}/mkspecs/modules/qt_*.pri \
"
