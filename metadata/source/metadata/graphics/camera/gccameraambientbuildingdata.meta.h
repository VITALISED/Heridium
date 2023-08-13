#pragma once

#include "../../../../../../../pch.h"
class cGcCameraAmbientBuildingData
{
    static const unsigned __int64 muNameHash = 16113659531393760845;
    static const unsigned __int64 muTemplateHash = 1300656343319754089;
    static const int miNumMembers = 7;

    TkID<128> mAnimation;
    TkID<128> mDroneAnimation;
    float mfOffset;
    bool mbUseLookAt;
    bool mbAvoidTerrain;
    cTkFixedArray<bool> maAvailableBuildings;
    cTkFixedArray<bool> maAvailableRaces;

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
