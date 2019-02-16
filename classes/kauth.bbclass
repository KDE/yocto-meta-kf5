# Class for recipes using KAuth host tools

DEPENDS += " \
    kauth \
    kauth-native \
    polkit-qt-1 \
"

EXTRA_OECMAKE += " -DKF5_HOST_TOOLING=${STAGING_DIR_NATIVE}/${libdir}/cmake"
