#pragma once

#include "../../../../../../pch.h"
class cGcSyncBufferSaveData
{
    static const unsigned __int64 muNameHash = 17269216028285956280;
    static const unsigned __int64 muTemplateHash = 4808894837451040057;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
