git submodule update --init
rm -rf build
mkdir build
cd build
cmake ..
make 
make install
