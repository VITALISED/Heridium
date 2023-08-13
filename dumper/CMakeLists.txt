# Thaumium
add_library(HeridiumDumper SHARED
        "dllmain.cpp"
        "framework.h"
        "../common/metadata/TkClassPointer.h"
		"../common/utilities/allocators/TkSTLAllocator.h"
		"../common/utilities/TkArray.h"
		"../common/utilities/TkString.h"
		"../common/utilities/TkLinearMemoryPool.h"
		"../common/utilities/TkMemoryPool.h"
		"../common/xml/XMLAttribute.h"
		"../common/xml/XMLClear.h"
		"../common/xml/XMLNode.h"
)

target_link_libraries(
  HeridiumDumper PRIVATE ${CMAKE_SOURCE_DIR}/thirdparty/lib/MinHook.x64.lib)

target_include_directories(HeridiumDumper
                           PRIVATE ${CMAKE_SOURCE_DIR}/thirdparty/include)

target_precompile_headers(HeridiumDumper PRIVATE pch.h)

set_target_properties(HeridiumDumper PROPERTIES
        OUTPUT_NAME HeridiumDumper)   
