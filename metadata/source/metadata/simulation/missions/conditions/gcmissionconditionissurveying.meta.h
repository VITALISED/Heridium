#pragma once
#include "../../../../../../../../pch.h"

enum eForHotspotType
{
    EForHotspotType_Any = 0,
    EForHotspotType_Power = 1,
    EForHotspotType_Gas = 2,
    EForHotspotType_Minerals = 3,
};

class cGcMissionConditionIsSurveying
{
    static const unsigned __int64 muNameHash = 0xD3E5CFFA024865D7;
    static const unsigned __int64 muTemplateHash = 0x3F14B5FCAAEFF5F;
    static const int miNumMembers = 2;

    eForHotspotType meForHotspotType;
    bool mbRequireAlreadyAnalysed;

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
