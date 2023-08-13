#pragma once

#include "../../../../../../../pch.h"
class cGcCustomisationDescriptorGroup
{
    static const unsigned __int64 muNameHash = 9265376715394068918;
    static const unsigned __int64 muTemplateHash = 10273576369816709541;
    static const int miNumMembers = 8;

    TkID<128> mGroupID;
    TkID<256> mTitle;
    cTkFixedString<128,char> macImage;
    cTkDynamicArray<cTkFixedString<32,char> > maDescriptors;
    cTkDynamicArray<cTkFixedString<32,char> > maSuffixInclusionList;
    TkID<128> mLinkedSpecialID;
    TkID<256> mTip;
    bool mbHiddenInCustomiser;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
