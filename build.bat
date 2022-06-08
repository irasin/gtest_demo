@echo off
git submodule update --init
if exist build (
    echo "build folder already exists, removing..."
    rd /s/q build
)

mkdir build
cd build
cmake -G "MinGW Makefiles" ..
mingw32-make
mingw32-make install
