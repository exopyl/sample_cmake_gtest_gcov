# sample_cpp_gtest

[![Build](https://github.com/exopyl/sample_cpp_gtest/actions/workflows/build_debug.yml/badge.svg)](https://github.com/exopyl/sample_cpp_gtest/actions)
[![Release](https://github.com/exopyl/sample_cpp_gtest/actions/workflows/build_release.yml/badge.svg)](https://github.com/exopyl/sample_cpp_gtest/actions)
[![codecov](https://codecov.io/gh/exopyl/sample_cpp_gtest/branch/main/graph/badge.svg)](https://codecov.io/gh/exopyl/sample_cpp_gtest)

## Build

Debug

```cmake -DCMAKE_BUILD_TYPE=Debug . && make VERBOSE=1 && make test && make coverage```

Release

```cmake -DCMAKE_BUILD_TYPE=Release . && make VERBOSE=1 && make test && make install```
