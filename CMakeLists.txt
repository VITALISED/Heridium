cmake_minimum_required(VERSION 3.15)

project(Heridium CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_C_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE METADATA ${CMAKE_SOURCE_DIR}/metadata/*)

add_library(Heridium STATIC
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
	"common/maths/TkVector2.h"
	"common/maths/TkVector3.h"
	"common/maths/TkVector4.h"
	"common/maths/TkPhysRelVec3.h"
	"common/utilities/TkNetworkID.h"
	"common/maths/TkHalfVector4.h"
	"common/simulation/TkSeed.h"
	"common/resources/TkSmartResHandle.h"
	"common/utilities/TkStrongType.h"
	"common/graphics/TkColour.h"
	"common/attachments/TkHandle.h"
	${METADATA}
)

 target_precompile_headers(Heridium PRIVATE pch.h)


target_include_directories(Heridium PRIVATE ${CMAKE_SOURCE_DIR}/metadata)

set_target_properties(Heridium PROPERTIES
        OUTPUT_NAME Heridium
)   

add_subdirectory(dumper)