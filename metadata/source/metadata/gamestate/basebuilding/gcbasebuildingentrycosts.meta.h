#pragma once
#include "../../../../../../../pch.h"

class cGcBaseBuildingEntryCosts
{
    static const unsigned __int64 muNameHash = 0x2229006A022A6430;
    static const unsigned __int64 muTemplateHash = 0xEE84845AB3262787;
    static const int miNumMembers = 9;

    TkID<128> mID;
    float mfActive0AverageFrameTimeCost;
    float mfActive1AverageFrameTimeCost;
    int miActiveTotalNodes;
    int miActivePhysicsComponents;
    float mfInactive0AverageFrameTimeCost;
    float mfInactive1AverageFrameTimeCost;
    int miInactiveTotalNodes;
    int miInactivePhysicsComponents;

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
