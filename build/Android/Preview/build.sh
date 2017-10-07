#!/bin/sh
# This file was generated based on /usr/local/share/uno/Packages/UnoCore/1.2.2/targets/android/gradle-build.sh.
# WARNING: Changes might be lost if you edit this file directly.
set -e

export JAVA_HOME="/Library/Java/JavaVirtualMachines/jdk1.8.0_101.jdk/Contents/Home"

export SCRIPT_DIR="`dirname "$0"`"

echo "## 2/2: stardy.apk"

cd "$SCRIPT_DIR/"
if [ ! -d "/Users/mac/Library/Android/sdk/cmake" ]; then
    echo "ERROR: Unable to find the 'cmake' command. Please run 'fuse install android' and 'uno clean'. Expected to find cmake in /Users/mac/Library/Android/sdk/cmake" >&2
    exit 1
fi

./gradlew assembleDebug

cd "$SCRIPT_DIR"

##if !#(LIBRARY:Defined)
ln -sf app/build/outputs/apk/app-debug.apk stardy.apk
##endif
