#pragma once

#include "../../../../../../../pch.h"
class cGcBaseBuildingPartStyle;
class cTkMagicModelData;

class cGcBaseBuildingPartData
{
    static const unsigned __int64 muNameHash = 5723922314355982332;
    static const unsigned __int64 muTemplateHash = 8594265656462742653;
    static const int miNumMembers = 12;

    TkID<256> mPartID;
    cGcBaseBuildingPartStyle mStyle;
    cTkMagicModelData mMagicData;
    unsigned int muiNodesCost;
    unsigned int muiTimeCost;
    unsigned int muiPhysicsCost;
    unsigned int muiMeshesCost;
    unsigned int muiInstanceNodesCost;
    unsigned int muiInstanceTimeCost;
    unsigned int muiInstanceMeshesCost;
    unsigned __int64 mui64LastProfiledTimestamp;
    unsigned __int64 mui64InstanceLastProfiledTimestamp;

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
