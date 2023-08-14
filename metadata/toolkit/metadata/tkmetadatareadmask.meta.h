#pragma once
#include "../../../pch.h"

enum eMetadataReadMask
{
    EMetadataReadMask_Default = 1,
    EMetadataReadMask_SaveWhenMultiplayerClient = 2,
    EMetadataReadMask_SavePlayerPosition = 4,
    EMetadataReadMask_SavePlayerInventory = 8,
    EMetadataReadMask_SaveDifficultySettings = 16,
};

class cTkMetadataReadMask
{
public:
    static const unsigned __int64 muNameHash = 0x76BB9C78D7AE1C6B;
    static const unsigned __int64 muTemplateHash = 0xE5E072016B296CBC;
    static const int miNumMembers = 1;

    eMetadataReadMask meMetadataReadMask;

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
