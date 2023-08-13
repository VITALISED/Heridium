#pragma once

#include "../../../../../../pch.h"
class cTkTextureResource;
class cTkTextureResource;

class cGcWikiPage
{
    static const unsigned __int64 muNameHash = 9755528081677536908;
    static const unsigned __int64 muTemplateHash = 14560290059712878491;
    static const int miNumMembers = 5;

    TkID<256> mPageID;
    cTkTextureResource mIcon;
    cTkFixedString<64,char> macContent;
    cTkFixedString<64,char> macVRContent;
    cTkTextureResource mContentImage;

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
