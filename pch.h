#pragma once

#include "framework.h"

#include "common/utilities/TkArray.h"
#include "common/metadata/TkClassPointer.h"
#include "common/utilities/allocators/TkSTLAllocator.h"
#include "common/utilities/TkArray.h"
#include "common/utilities/TkString.h"
#include "common/utilities/TkLinearMemoryPool.h"
#include "common/utilities/TkMemoryPool.h"
#include "common/xml/XMLAttribute.h"
#include "common/xml/XMLClear.h"
#include "common/xml/XMLNode.h"
#include "common/metadata/TkID.h"
#include "common/maths/TkHalfVector4.h"
#include "common/maths/TkPhysRelVec3.h"
#include "common/maths/TkVector2.h"
#include "common/maths/TkVector3.h"
#include "common/maths/TkVector4.h"
#include "common/utilities/TkNetworkID.h"
#include "common/simulation/TkSeed.h"
#include "common/graphics/TkColour.h"
#include "common/resources/TkSmartResHandle.h"
#include "common/attachments/TkHandle.h"

#define __HERIDIUM_BASE (uintptr_t)GetModuleHandleA("NMS.exe")
#define __HERIDIUM_OFFSET(offset) (LPVOID)(__HERIDIUM_BASE + (uintptr_t)offset)

typedef bool (*__HERIDIUM_ClassPointerCompare)(const cTkClassPointer* lPtr, const cTkClassPointer* lOtherPtr);
typedef void (*__HERIDIUM_ClassPointerCopy)(cTkClassPointer * lDest, const cTkClassPointer * lSource);
typedef cTkClassPointer*(*__HERIDIUM_ClassPointerCreate)(cTkClassPointer * result);
typedef void (*__HERIDIUM_ClassPointerCreateDefault)(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
typedef void (*__HERIDIUM_ClassPointerDestroy)(cTkClassPointer* lPtr);
typedef void (*__HERIDIUM_ClassPointerValidateData)(cTkClassPointer* lPtr);
typedef void (*__HERIDIUM_ClassPointerFix)(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
typedef unsigned __int64 (*__HERIDIUM_ClassPointerGenerateHash)(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
typedef void (*__HERIDIUM_ClassPointerRead)(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
typedef void (*__HERIDIUM_ClassPointerRender)(cTkClassPointer* lPtr);
typedef bool (*__HERIDIUM_ClassPointerSave)(const cTkClassPointer* lPtr, const char* lpacFilename);
typedef void (*__HERIDIUM_ClassPointerWrite)(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);