#!/bin/bash -x

# Get Script Directory
pushd . > /dev/null

SCRIPT_DIR="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )"
NUMCPUS=`grep -c '^processor' /proc/cpuinfo`

mkdir -p $SCRIPT_DIR/build/;
cd $SCRIPT_DIR/build/;

cmake3 ..
time nice make -j$NUMCPUS --load-average=$NUMCPUS

popd > /dev/null