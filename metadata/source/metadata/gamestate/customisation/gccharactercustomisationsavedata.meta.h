#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/gamestate/customisation/gccharactercustomisationdata.meta.h"

class cGcCharacterCustomisationSaveData
{
public:
    static const unsigned __int64 muNameHash = 0xC5B9CCD1978B8755;
    static const unsigned __int64 muTemplateHash = 0x34E14CB75FB4264A;
    static const int miNumMembers = 2;

    TkID<128> mSelectedPreset;
    cGcCharacterCustomisationData mCustomData;

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
