cmake_minimum_required(VERSION 3.15)

project(Hermidium CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(HermidiumDLL SHARED
	"dllmain.cpp"
	"framework.h"
	"heridium.h"
	"common/metadata/TkClassPointer.h"
	"common/utilities/allocators/TkSTLAllocator.h"
	"common/utilities/TkArray.h"
	"common/utilities/TkString.h"
	"common/utilities/TkLinearMemoryPool.h"
	"common/utilities/TkMemoryPool.h"
	"common/xml/XMLAttribute.h"
	"common/xml/XMLClear.h"
	"common/xml/XMLNode.h"
	"common/metadata/TkID.h"
)

target_include_directories(HermidiumDLL PRIVATE ${CMAKE_SOURCE_DIR}/metadata)

target_precompile_headers(HermidiumDLL PRIVATE pch.h metadata.h)

set_target_properties(HermidiumDLL PROPERTIES
        OUTPUT_NAME HermidiumDLL
)   

add_subdirectory(dumper)