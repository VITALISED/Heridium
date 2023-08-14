#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/reality/gcalienrace.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/spawn/gcselectableobjectdata.meta.h"

class cGcSelectableObjectList
{
public:
    static const unsigned __int64 muNameHash = 0x5035CC19B55D3442;
    static const unsigned __int64 muTemplateHash = 0x933E6844872C884;
    static const int miNumMembers = 3;

    TkID<128> mName;
    cGcAlienRace mRace;
    cTkDynamicArray<cGcSelectableObjectData> maOptions;

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
