#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcfrigatestattype.meta.h"

class cGcExpeditionPowerup
{
public:
    static const unsigned __int64 muNameHash = 0xB76095BD04FCB5D2;
    static const unsigned __int64 muTemplateHash = 0x52724DA9E32E1E14;
    static const int miNumMembers = 5;

    TkID<128> mProductId;
    cGcFrigateStatType mStatModified;
    int miValueChange;
    TkID<256> mSelectionDescription;
    TkID<256> mModuleDescription;

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
