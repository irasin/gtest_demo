git submodule update --init
rm -rf build
mkdir build
cd build
cmake ..
make 
make install


cd output/bin
chmod +x *
# ./foo_test_shared.exe
./foo_test_static.exe