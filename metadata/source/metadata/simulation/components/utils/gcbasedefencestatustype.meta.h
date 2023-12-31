#pragma once
#include "../../../../../../pch.h"

enum eBaseDefenceStatus
{
    EBaseDefenceStatus_AttackingTarget = 0,
    EBaseDefenceStatus_Alert = 1,
    EBaseDefenceStatus_SearchingForTarget = 2,
    EBaseDefenceStatus_Disabled = 3,
    EBaseDefenceStatus_Security = 4,
};

class cGcBaseDefenceStatusType
{
public:
    static const unsigned __int64 muNameHash = 0x10D5ED9C9EE19797;
    static const unsigned __int64 muTemplateHash = 0xFB0EDF75D5C71764;
    static const int miNumMembers = 1;

    eBaseDefenceStatus meBaseDefenceStatus;

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
