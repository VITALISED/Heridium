#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/utilities/data/gcresourceelement.meta.h"

class cGcSpawnComponentOption
{
public:
    static const unsigned __int64 muNameHash = 0xA7EE5AECC28F3591;
    static const unsigned __int64 muTemplateHash = 0x4A7AB9CCAC08262;
    static const int miNumMembers = 3;

    TkID<128> mName;
    cTkSeed mSeed;
    cGcResourceElement mSpecificModel;

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
