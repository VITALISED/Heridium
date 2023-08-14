#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/components/tkresourcedescriptordata.meta.h"

class cTkResourceDescriptorList
{
public:
    static const unsigned __int64 muNameHash = 0x6E58FF6D49923F40;
    static const unsigned __int64 muTemplateHash = 0x7BF6829A0ED8BCD1;
    static const int miNumMembers = 2;

    TkID<128> mTypeId;
    cTkDynamicArray<cTkResourceDescriptorData> maDescriptors;

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
