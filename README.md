# a gtest demo with cmake
use git submodule to add gtest into this project


## to run shared lirbary test


### on linux
```cpp
export LD_LIBRARY_PATH=$DYLD_LIBRARY_PATH:${path to so}
```

### on mac

```cpp
export DYLD_LIBRARY_PATH=$DYLD_LIBRARY_PATH:${path to dylib}
```