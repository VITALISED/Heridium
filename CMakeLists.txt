cmake_minimum_required(VERSION 3.15)

project(Heridium CXX)

# Language specs
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Thaumium
add_library(Heridium SHARED
        "dllmain.cpp"
        "framework.h"
        "common/utilities/TkString.h"
        "common/utilities/TkArray.h" "memory.h" "memory.cpp" "hooks.h" "hooks.cpp"  "common/metadata/TkClassPointer.h" "common/xml/XMLNode.h" "common/xml/XMLClear.h" "common/xml/XMLAttribute.h" "common/utilities/TkLinearMemoryPool.h" "common/utilities/TkMemoryPool.h" "common/metadata/TkMetaData.h" "common/metadata/TkMetaDataClass.h" "dllmain.h")

target_link_libraries(
  Heridium PRIVATE ${CMAKE_SOURCE_DIR}/thirdparty/lib/MinHook.x64.lib)

target_include_directories(Heridium
                           PRIVATE ${CMAKE_SOURCE_DIR}/thirdparty/include)

target_precompile_headers(Heridium PRIVATE pch.h)

set_target_properties(Heridium PROPERTIES
        OUTPUT_NAME Heridium)   
