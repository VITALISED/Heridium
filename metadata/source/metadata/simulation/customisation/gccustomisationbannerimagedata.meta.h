#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/tktextureresource.meta.h"

class cGcCustomisationBannerImageData
{
public:
    static const unsigned __int64 muNameHash = 0xCEE815614F8FABAF;
    static const unsigned __int64 muTemplateHash = 0xD574FC0402980788;
    static const int miNumMembers = 4;

    cTkTextureResource mBannerImage;
    TkID<128> mLinkedSpecialID;
    bool mbWideImage;
    TkID<256> mTipText;

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
