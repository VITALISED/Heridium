#pragma once
#include "pch.h"

class cGcBuildingPartSearchType;

enum ePartInCurrentBase
{
    EPartInCurrentBase_DontCare = 0,
    EPartInCurrentBase_YesAllPlayerOwned = 1,
};

class cGcMissionConditionBasePartBuilt
{
public:
    static const unsigned __int64 muNameHash = 0x75A4AF2BCC689FD2;
    static const unsigned __int64 muTemplateHash = 0xFC34477E2A2EDC37;
    static const int miNumMembers = 5;

    TkID<128> mPartID;
    bool mbTakeIDFromSeasonData;
    int miCount;
    cGcBuildingPartSearchType mType;
    ePartInCurrentBase mePartInCurrentBase;

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
