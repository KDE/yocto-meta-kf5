# Class for recipes using kcoreaddons host tools

do_compile_prepend() {
    # desktoptojson needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
}

DEPENDS += " \
    kcoreaddons \
    kcoreaddons-native \
"

EXTRA_OECMAKE += " -DKF5_HOST_TOOLING=${STAGING_DIR_NATIVE}/${libdir}/cmake"
