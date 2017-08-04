#!/bin/bash

function validate_url()
{
    local recipe=$1
    local url=$2

    local schema=`echo $url | cut -c 1-6`
    if [ $schema != "https:" ]; then
        echo "Warning: $url in $recipe is not using SSL."
    fi

    curl --silent --fail $url > /dev/null
    if [ $? -ne 0 ]; then
        echo "ERROR: $url cannot be received."
    fi
}

for r in `find -name *.inc -o -name *.bb`; do
    url=`cat $r | grep HOMEPAGE | sed -e 's,HOMEPAGE\s*=\s*\"\(.*\)\",\1,'`
    if ! [ -z "$url" ]; then
        validate_url "$r" "$url"
    fi
done
