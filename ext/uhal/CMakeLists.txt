cmake_minimum_required(VERSION 2.8.8)
project(uhal_builder C CXX)
include(ExternalProject)

ExternalProject_Add(uhal
    SVN_REPOSITORY http://svn.cern.ch/reps/cactus/trunk/cactuscore/uhal
    CMAKE_ARGS -DCMAKE_ARCHIVE_OUTPUT_DIRECTORY_DEBUG:PATH=DebugLibs
               -DCMAKE_ARCHIVE_OUTPUT_DIRECTORY_RELEASE:PATH=ReleaseLibs
               -DCMAKE_CXX_FLAGS=${MSVC_COMPILER_DEFS}
               -Dgtest_force_shared_crt=ON
     PREFIX "${CMAKE_CURRENT_BINARY_DIR}"
# Disable install step
    INSTALL_COMMAND ""
)

# Specify include dir
ExternalProject_Get_Property(uhal source_dir)
set(UHAL_INCLUDE_DIRS ${source_dir}/include PARENT_SCOPE)

# Specify MainTest's link libraries
ExternalProject_Get_Property(uhal binary_dir)
set(UHAL_LIBS_DIR ${binary_dir} PARENT_SCOPE)

