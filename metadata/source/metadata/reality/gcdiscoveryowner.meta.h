#pragma once
#include "pch.h"

class cGcDiscoveryOwner
{
public:
    static const unsigned __int64 muNameHash = 0x59B76FD6543E9F75;
    static const unsigned __int64 muTemplateHash = 0x43D52A16FFF4C492;
    static const int miNumMembers = 5;

    cTkFixedString<64,char> macLocalID;
    cTkFixedString<64,char> macOnlineID;
    cTkFixedString<64,char> macUsername;
    cTkFixedString<64,char> macPlatform;
    int miTimestamp;

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
