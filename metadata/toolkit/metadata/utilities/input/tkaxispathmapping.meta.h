#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/utilities/data/tkinputaxisenum.meta.h"
#include "../../../../../metadata/toolkit/metadata/utilities/data/tkinputhandenum.meta.h"

class cTkAxisPathMapping
{
public:
    static const unsigned __int64 muNameHash = 0x19C4AA7DA3B42958;
    static const unsigned __int64 muTemplateHash = 0x60587FED618E0B51;
    static const int miNumMembers = 7;

    cTkInputAxisEnum mId;
    TkID<256> mName;
    cTkFixedString<128,char> macSolidIcon;
    cTkFixedString<128,char> macOverlayIcon;
    cTkFixedString<128,char> macSpecialIcon;
    cTkInputHandEnum mHand;
    cTkFixedString<32,char> macOpenVROriginNames;

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
