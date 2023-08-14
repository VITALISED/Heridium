#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/utilities/input/tkopenvrcontrollerlookup.meta.h"

class cTkOpenVRControllerList
{
public:
    static const unsigned __int64 muNameHash = 0x9BF04097261BBFEA;
    static const unsigned __int64 muTemplateHash = 0x37F80B4F24A556F4;
    static const int miNumMembers = 1;

    cTkDynamicArray<cTkOpenVRControllerLookup> maDevices;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
