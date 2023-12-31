#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/utilities/input/actions/gcinputactions.meta.h"

enum eInputActionInfoFlags
{
    EInputActionInfoFlags_HideInControlsPage = 1,
    EInputActionInfoFlags_HideInMenusMenu = 2,
    EInputActionInfoFlags_OnlyVR = 4,
    EInputActionInfoFlags_OnlyNonVR = 8,
    EInputActionInfoFlags_None = 0,
};

class cGcInputActionInfo
{
public:
    static const unsigned __int64 muNameHash = 0x793BE7AABA010DFF;
    static const unsigned __int64 muTemplateHash = 0xE47ED0B56D1E65A0;
    static const int miNumMembers = 12;

    bool mbAnalogue;
    cGcInputActions mPairing;
    cTkFixedString<128,char> macTextTag;
    TkID<256> mLocTag;
    TkID<256> mConsoleLocTag;
    cTkFixedString<128,char> macSolidIcon;
    cTkFixedString<128,char> macOverlayIcon;
    cTkFixedString<128,char> macSpecialIcon;
    cTkFixedString<32,char> macExternalId;
    cTkFixedString<32,char> macExternalLoc;
    cTkFixedString<32,char> macExternalDigitalAliasId;
    eInputActionInfoFlags meInputActionInfoFlags;

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
