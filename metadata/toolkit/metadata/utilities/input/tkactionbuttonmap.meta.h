#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/utilities/data/tkinputenum.meta.h"
#include "../../../../../metadata/toolkit/metadata/utilities/input/tkplatformbuttonpair.meta.h"

class cTkActionButtonMap
{
public:
    static const unsigned __int64 muNameHash = 0xC1A3BA40B3A88476;
    static const unsigned __int64 muTemplateHash = 0x4BE89D8B8314E3BD;
    static const int miNumMembers = 4;

    TkID<128> mActionId;
    bool mbScaleToFitFont;
    cTkInputEnum mPadButtonId;
    cTkDynamicArray<cTkPlatformButtonPair> maPlatforms;

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
