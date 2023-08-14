#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/utilities/data/gcresourceelement.meta.h"
#include "../../../../metadata/source/metadata/reality/gcalienrace.meta.h"

class cGcUniqueNPCSpawnData
{
public:
    static const unsigned __int64 muNameHash = 0xB82C2871716786E2;
    static const unsigned __int64 muTemplateHash = 0x7CA9A1793484A18;
    static const int miNumMembers = 4;

    TkID<128> mId;
    TkID<128> mPresetId;
    cGcResourceElement mResourceElement;
    cGcAlienRace mRace;

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
