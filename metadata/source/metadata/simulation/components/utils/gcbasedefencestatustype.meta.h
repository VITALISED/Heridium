#pragma once

#include "../../../../../../../../pch.h"
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
    static const unsigned __int64 muNameHash = 1213136931582482327;
    static const unsigned __int64 muTemplateHash = 18090642450384623460;
    static const int miNumMembers = 1;

    eBaseDefenceStatus meBaseDefenceStatus;

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
