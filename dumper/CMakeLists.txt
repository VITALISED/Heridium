# Thaumium
add_library(HeridiumDumper SHARED
 "dllmain.cpp"
        "framework.h"
        "../common/utilities/TkString.h"
        "../common/utilities/TkArray.h"
        "memory.h"
        "memory.cpp"
        "hooks.h"
        "hooks.cpp"
        "../common/metadata/TkClassPointer.h"
        "../common/xml/XMLNode.h"
        "../common/xml/XMLClear.h"
        "../common/xml/XMLAttribute.h"
        "../common/utilities/TkLinearMemoryPool.h"
        "../common/utilities/TkMemoryPool.h"
        "../common/metadata/TkMetaData.h"
        "../common/metadata/TkMetaDataClass.h"
        "dllmain.h"
        "../common/utilities/TkFlatMap.h"
        "../common/utilities/allocators/TkSTLAllocator.h"
        "../common/metadata/TkMetaDataXML.h"
        "../common/utilities/spookyhash/SpookyV2.h"
        "../common/utilities/spookyhash/SpookyV2.cpp"
        "paths.h"
        "dumper.h"
        "dumper.cpp")


target_link_libraries(
  HeridiumDumper PRIVATE ${CMAKE_SOURCE_DIR}/thirdparty/lib/MinHook.x64.lib)

target_include_directories(HeridiumDumper
                           PRIVATE ${CMAKE_SOURCE_DIR}/thirdparty/include)

target_precompile_headers(HeridiumDumper PRIVATE pch.h)

set_target_properties(HeridiumDumper PROPERTIES
        OUTPUT_NAME HeridiumDumper)   
