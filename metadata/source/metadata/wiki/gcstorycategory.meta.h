#pragma once
#include "../../../../../../pch.h"

class cTkTextureResource;
class cTkTextureResource;

class cGcStoryCategory
{
    static const unsigned __int64 muNameHash = 0x276FB03774F36C9F;
    static const unsigned __int64 muTemplateHash = 0x67F2EBF4F9D4B4B4;
    static const int miNumMembers = 5;

    TkID<256> mCategoryID;
    TkID<256> mCategoryIDUpper;
    cTkTextureResource mIconOn;
    cTkTextureResource mIconOff;
    cTkDynamicArray<cGcStoryPage> maPages;

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
