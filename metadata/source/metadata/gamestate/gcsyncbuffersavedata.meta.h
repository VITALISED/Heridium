#pragma once
#include "../../../../pch.h"

class cGcSyncBufferSaveData
{
public:
    static const unsigned __int64 muNameHash = 0xEFA8947B437770B8;
    static const unsigned __int64 muTemplateHash = 0x42BCA060447AA539;
    static const int miNumMembers = 5;

    unsigned __int64 mui64SpaceAddress;
    cTkFixedString<64,char> macOwnerOnlineId;
    cTkFixedString<32,char> macOwnerPlatformId;
    unsigned int muiBufferVersion;
    unsigned int muiItemsCount;

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
