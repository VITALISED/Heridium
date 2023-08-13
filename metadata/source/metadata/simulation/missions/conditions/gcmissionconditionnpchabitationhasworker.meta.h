#pragma once

#include "../../../../../../../../pch.h"
class cGcNPCHabitationType;

enum eWorkerInCurrentBase
{
    EWorkerInCurrentBase_DontCare = 0,
    EWorkerInCurrentBase_Yes = 1,
    EWorkerInCurrentBase_No = 2,
};

class cGcMissionConditionNPCHabitationHasWorker
{
    static const unsigned __int64 muNameHash = 4737781514534956369;
    static const unsigned __int64 muTemplateHash = 6575620924301191240;
    static const int miNumMembers = 2;

    cGcNPCHabitationType mWorkerType;
    eWorkerInCurrentBase meWorkerInCurrentBase;

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
