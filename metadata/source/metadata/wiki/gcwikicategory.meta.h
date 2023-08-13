#pragma once
#include "../../../../../../pch.h"

class cTkTextureResource;
class cTkTextureResource;
class cGcWikiTopicType;

class cGcWikiCategory
{
    static const unsigned __int64 muNameHash = 0xBCA6917366A88ADB;
    static const unsigned __int64 muTemplateHash = 0xFFE1F2575FBC1177;
    static const int miNumMembers = 9;

    TkID<256> mCategoryID;
    TkID<256> mCategoryIDUpper;
    cTkTextureResource mIconOn;
    cTkTextureResource mIconOff;
    cTkDynamicArray<cGcWikiTopic> maTopics;
    cGcWikiTopicType mType;
    cTkDynamicArray<TkID<128> > maItems;
    int miUnseenCount;
    int miUnlockedCount;

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
