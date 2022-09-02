cmake_minimum_required(VERSION 3.14)

project(Iris LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SDK_NAME "FortniteSDK-5.10")

include_directories(include)
include_directories(externals/${SDK_NAME})
include_directories(externals/minhook/include)

add_subdirectory(externals/minhook)

add_library(Iris SHARED
    src/main.cpp

    externals/${SDK_NAME}/SDK.hpp
    externals/${SDK_NAME}/Containers.h
    externals/${SDK_NAME}/SDK/Basic.cpp
    externals/${SDK_NAME}/SDK/CoreUObject_functions.cpp
    externals/${SDK_NAME}/SDK/Engine_functions.cpp
    externals/${SDK_NAME}/SDK/FortniteGame_functions.cpp
    externals/${SDK_NAME}/SDK/GameplayAbilities_functions.cpp

    include/util.h
    include/offsets.h
    include/sdk_util.h
    include/ability_util.h
    include/athena_util.h

    include/app.h
    src/app.cpp

    src/hooks/listen_hook.cpp
    src/hooks/replication_hook.cpp
    src/hooks/crash_hook.cpp
    src/hooks/kick_hook.cpp
    src/hooks/login_hook.cpp
    src/hooks/event_hook.cpp
)

target_link_libraries(Iris minhook)
target_compile_definitions(Iris PRIVATE IRIS_LIBRARY)
