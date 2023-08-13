#pragma once
#include "../../../../../../../pch.h"

class cTkChordPathMapping
{
    static const unsigned __int64 muNameHash = 0xA012CD9DA9418E41;
    static const unsigned __int64 muTemplateHash = 0xBF2A55B37578B2B0;
    static const int miNumMembers = 6;

    cTkDynamicArray<cTkInputEnum> maButtonIds;
    TkID<256> mName;
    TkID<128> mTextTag;
    cTkFixedString<128,char> macSolidIcon;
    cTkFixedString<128,char> macOverlayIcon;
    cTkFixedString<128,char> macSpecialIcon;

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
