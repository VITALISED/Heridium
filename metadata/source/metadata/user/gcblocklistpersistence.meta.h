#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/user/gcblockeduser.meta.h"
#include "../../../../metadata/source/metadata/user/gcblockedmessage.meta.h"

class cGcBlockListPersistence
{
public:
    static const unsigned __int64 muNameHash = 0xFD630C0F790F1BCB;
    static const unsigned __int64 muTemplateHash = 0x6018730138103927;
    static const int miNumMembers = 6;

    cTkFixedArray<cGcBlockedUser, 50> maBlockedUserArray;
    int miNextSlot;
    int miListSize;
    cTkFixedArray<cGcBlockedMessage, 50> maBlockedMessageArray;
    int miMessageNextSlot;
    int miMessageListSize;

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
