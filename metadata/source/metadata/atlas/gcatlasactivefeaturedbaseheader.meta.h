#pragma once
#include "pch.h"

class cGcAtlasActiveFeaturedBaseHeader
{
public:
    static const unsigned __int64 muNameHash = 0x5CA0B64244DF6963;
    static const unsigned __int64 muTemplateHash = 0x8DB16379E37A198F;
    static const int miNumMembers = 9;

    bool mbDev;
    bool mbQA;
    bool mbProd;
    cTkFixedString<32,char> macPlatform;
    cTkFixedString<64,char> macUserId;
    cTkFixedString<64,char> macUserName;
    cTkFixedString<64,char> macBaseName;
    cTkFixedString<64,char> macUA;
    cTkFixedString<64,char> macBaseId;

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
