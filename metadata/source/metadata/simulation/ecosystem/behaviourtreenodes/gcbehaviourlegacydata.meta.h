#pragma once
#include "../../../../../../../../pch.h"

enum eLegacyBehaviour
{
    ELegacyBehaviour_Riding = 0,
    ELegacyBehaviour_Interaction = 1,
    ELegacyBehaviour_Attracted = 2,
    ELegacyBehaviour_Flee = 3,
    ELegacyBehaviour_Defend = 4,
    ELegacyBehaviour_FollowPlayer = 5,
    ELegacyBehaviour_AvoidPlayer = 6,
    ELegacyBehaviour_NoticePlayer = 7,
    ELegacyBehaviour_FollowRoutine = 8,
};

class cGcBehaviourLegacyData
{
    static const unsigned __int64 muNameHash = 0xE727C698F36AF1CA;
    static const unsigned __int64 muTemplateHash = 0x81663F7AA75A4A81;
    static const int miNumMembers = 1;

    eLegacyBehaviour meLegacyBehaviour;

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
