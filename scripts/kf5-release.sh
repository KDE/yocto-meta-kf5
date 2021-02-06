#!/bin/bash
#
# add/remove KF5 release recipes
#
# SPDX-FileCopyrightText: 2017-2018 Volker Krause <vkrause@kde.org>
# SPDX-FileCopyrightText: 2020 Andreas Cord-Landwehr <cordlandwehr@kde.org>
#
# SPDX-License-Identifier: MIT

function usage()
{
    echo "$1 [add|remove] <version>"
    echo "$1 metainfo <version> [sourcedir]"
    exit 1
}

function yaml() {
    python3 -c "
import yaml
metainfo=yaml.safe_load(open('$1'))
if '$2' in metainfo:
    print(metainfo['$2'])
else:
    print()
"
}

command=$1
if [ -z "$command" ]; then usage $0; fi

version=$2
if [ -z "$version" ]; then usage $0; fi

base=`dirname $0`/../recipes-kf5
rootdir=$PWD

case $command in
add)
    # search for all non-staging inc files without underlines
    for recipe in `find $base -regex ".*/[0-9a-zA-Z\-]+\.inc" | grep -v /staging/`; do
        name=`echo $recipe | sed -e "s,\.inc,_${version}.bb,"`
cat <<EOM > $name
# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

require \${PN}.inc
SRCREV = "v\${PV}"
EOM
        git add $name
    done
    ;;
remove)
    for recipe in `find $base -name "*_$version.bb"`; do
        git rm -f $recipe
    done
    ;;
metainfo)
    echo "Updating metainfo..."
    sourcedir=$3
    if [ -z "$sourcedir" ]; then
        sourcedir="$PWD/tmp";
    fi
    if [ -d "$sourcedir" ]; then
        echo "Using existing source directory $sourcedir: repositories expected in subfolders"
    else
        mkdir -p $sourcedir
    fi
    for recipe in `find $base -regex ".*/[0-9a-zA-Z\-]+\.inc" | grep -v /staging/`; do
        framework=`echo $recipe | grep -P -o '[0-9a-zA-Z\-]+(?=\.inc)'`
        filename=`echo $recipe | sed -e "s,\.inc,_metainfo\.inc,"`
        url="https://invent.kde.org/frameworks/$framework.git"
        if [ -d "$sourcedir/$framework" ]; then
            cd $sourcedir/$framework
            git fetch > /dev/null
            cd $rootdir
        else
            git clone -c advice.detachedHead=false -q --branch v$version $url $sourcedir/$framework > /dev/null
        fi
        cd $sourcedir/$framework
        git show v$version:metainfo.yaml > ../$framework.yaml
        cd $rootdir
        description=$(yaml $sourcedir/$framework.yaml "description")
        if [[ $description == "" ]] ; then
            echo "WARNING: no description for $framework"
        fi
cat <<EOM > $filename
# SPDX-FileCopyrightText: none
# SPDX-License-Identifier: CC0-1.0

SUMMARY = "$description"
HOMEPAGE = "https://api.kde.org/frameworks/$framework/html/index.html"
EOM
        git add $filename
        echo "$framework: DONE"
    done
    ;;
*)
    usage $0
    ;;
esac
