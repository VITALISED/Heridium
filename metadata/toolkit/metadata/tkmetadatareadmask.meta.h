#pragma once

#include "../../../../../pch.h"
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
    static const unsigned __int64 muNameHash = 8555603959948909675;
    static const unsigned __int64 muTemplateHash = 16564364779887094972;
    static const int miNumMembers = 1;

    eMetadataReadMask meMetadataReadMask;

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
