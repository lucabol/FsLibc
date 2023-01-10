cmake_minimum_required(VERSION 3.22)

project (FsLibc)

enable_testing()

set (FsLibc_VERSION_MAJOR 0)
set (FsLibc_VERSION_MINOR 8)

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -ffreestanding -nostdlib -Wall -Wextra -fprofile-arcs -ftest-coverage -DALT_FSLC_NAMES")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -ffreestanding -nostdlib -Wall -Wextra")
set(CMAKE_C_FLAGS_RELCHECK "${CMAKE_C_FLAGS_RELEASE} -ffreestanding -nostdlib -DALT_FSLC_NAMES")

add_subdirectory(libc)
add_subdirectory(tests)

find_package(UnitTest++ REQUIRED)
include_directories(${UTPP_INCLUDE_DIRS})
include_directories(SYSTEM "/usr/local/include/UnitTest++")
