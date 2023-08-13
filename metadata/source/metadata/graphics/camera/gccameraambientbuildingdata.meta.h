#pragma once
#include "pch.h"

class cGcCameraAmbientBuildingData
{
public:
    static const unsigned __int64 muNameHash = 0xDF9F37F8504FFE4D;
    static const unsigned __int64 muTemplateHash = 0x120CDC0D966EB569;
    static const int miNumMembers = 7;

    TkID<128> mAnimation;
    TkID<128> mDroneAnimation;
    float mfOffset;
    bool mbUseLookAt;
    bool mbAvoidTerrain;
    cTkFixedArray<bool, 52> maAvailableBuildings;
    cTkFixedArray<bool, 8> maAvailableRaces;

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
