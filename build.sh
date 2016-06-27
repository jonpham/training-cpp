#!/bin/bash -x

# Get Script Directory
pushd . > /dev/null

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"

mkdir -p $SCRIPT_DIR/build/;
cd $SCRIPT_DIR/build/;

cmake3 ..
make

popd > /dev/null