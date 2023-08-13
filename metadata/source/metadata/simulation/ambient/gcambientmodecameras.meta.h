#pragma once
#include "pch.h"

class cGcAmbientModeCameras
{
public:
    static const unsigned __int64 muNameHash = 0xAF2F2B2DB8C8446A;
    static const unsigned __int64 muTemplateHash = 0x33FA353B288C9430;
    static const int miNumMembers = 3;

    cTkDynamicArray<cGcCameraAmbientBuildingData1> maBuildingCameraAnimations;
    cTkDynamicArray<cGcCameraAmbientSpaceData1> maSpaceCameraAnimations;
    cTkDynamicArray<cGcCameraAmbientSpecialData1> maSpecialCameraAnimations;

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
