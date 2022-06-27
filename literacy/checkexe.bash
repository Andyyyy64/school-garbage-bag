#! /usr/bin/bash
for name in $(ls); do
    if [ -x $name ]; then
        echo A file $name is executable.
    else
        echo A file $name is non-executable.
    fi
done
