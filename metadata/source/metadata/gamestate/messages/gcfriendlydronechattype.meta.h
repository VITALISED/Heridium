#pragma once

#include "../../../../../../../pch.h"
enum eFriendlyDroneChatType
{
    EFriendlyDroneChatType_Summoned = 0,
    EFriendlyDroneChatType_Unsummoned = 1,
    EFriendlyDroneChatType_BecomeWanted = 2,
    EFriendlyDroneChatType_LoseWanted = 3,
    EFriendlyDroneChatType_Idle = 4,
};

class cGcFriendlyDroneChatType
{
    static const unsigned __int64 muNameHash = 31137498666971221;
    static const unsigned __int64 muTemplateHash = 7019653636308642325;
    static const int miNumMembers = 1;

    eFriendlyDroneChatType meFriendlyDroneChatType;

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
