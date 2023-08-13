#pragma once

#include "../../../../../../../../pch.h"
class cGcPersistentBaseTypes;

enum eIsOnCurrentSystem
{
    EIsOnCurrentSystem_DontCare = 0,
    EIsOnCurrentSystem_Yes = 1,
    EIsOnCurrentSystem_No = 2,
};

class cGcMissionConditionBaseClaimed
{
    static const unsigned __int64 muNameHash = 939999660381857653;
    static const unsigned __int64 muTemplateHash = 7398283546372629714;
    static const int miNumMembers = 5;

    bool mbClaimed;
    cGcPersistentBaseTypes mBase;
    eIsOnCurrentSystem meIsOnCurrentSystem;
    bool mbMustBeInBase;
    int miMinParts;

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
