#pragma once

#include "../../../../../../../../pch.h"
class cGcMaintenanceComponentData;

class cGcCreatureFeederComponentData
{
    static const unsigned __int64 muNameHash = 3622054683333943185;
    static const unsigned __int64 muTemplateHash = 4062687193954378624;
    static const int miNumMembers = 6;

    cGcMaintenanceComponentData mMaintenanceData;
    int miNumInputs;
    int miNumMealsPerBait;
    cTkDynamicArray<cTkFixedString<256,char> > maDispenseNodes;
    float mfDispenseVelocity;
    float mfDispensePeriod;

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
