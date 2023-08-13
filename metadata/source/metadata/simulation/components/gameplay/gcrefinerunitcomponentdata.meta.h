#pragma once
#include "pch.h"

class cGcMaintenanceComponentData;

class cGcRefinerUnitComponentData
{
public:
    static const unsigned __int64 muNameHash = 0xD2A73F296D17A20;
    static const unsigned __int64 muTemplateHash = 0xFD19C8B9A6CCD4F4;
    static const int miNumMembers = 3;

    cGcMaintenanceComponentData mMaintenanceData;
    int miNumInputs;
    bool mbIsCooker;

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
