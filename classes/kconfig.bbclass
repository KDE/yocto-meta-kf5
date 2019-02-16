# Class for recipes using kconfig host tools

DEPENDS += " \
    kconfig \
    kconfig-native \
"

EXTRA_OECMAKE += " -DKF5_HOST_TOOLING=${STAGING_DIR_NATIVE}/${libdir}/cmake"
