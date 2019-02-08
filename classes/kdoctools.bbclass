# Class for recipes using kdoctools to build their documentation

do_compile_prepend() {
    # meinproc5 needs to find installed service type files
    export XDG_DATA_DIRS=${STAGING_DATADIR}:$XDG_DATA_DIRS
    # meinproc5 needs to find its libraries
    export LD_LIBRARY_PATH=${STAGING_LIBDIR_NATIVE}:$LD_LIBRARY_PATH
}

DEPENDS += " \
    kdoctools \
    kdoctools-native \
    libxslt-native \
    karchive-native \
"
