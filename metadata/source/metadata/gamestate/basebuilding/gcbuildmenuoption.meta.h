#pragma once
#include "../../../../../../../pch.h"

enum eBuildMenuOption
{
    EBuildMenuOption_Place = 0,
    EBuildMenuOption_ChangeColour = 1,
    EBuildMenuOption_FreeRotate = 2,
    EBuildMenuOption_Scale = 3,
    EBuildMenuOption_SnapRotate = 4,
    EBuildMenuOption_Move = 5,
    EBuildMenuOption_Duplicate = 6,
    EBuildMenuOption_Delete = 7,
    EBuildMenuOption_ToggleBuildCam = 8,
    EBuildMenuOption_ToggleSnappingAndCollision = 9,
    EBuildMenuOption_ToggleSelectionMode = 10,
    EBuildMenuOption_ToggleWiringMode = 11,
    EBuildMenuOption_ViewRelatives = 12,
    EBuildMenuOption_CyclePart = 13,
    EBuildMenuOption_PlaceWire = 14,
    EBuildMenuOption_CycleRotateMode = 15,
};

class cGcBuildMenuOption
{
    static const unsigned __int64 muNameHash = 0xCF846F604521AD4F;
    static const unsigned __int64 muTemplateHash = 0x655CD9EAB6B8C9B5;
    static const int miNumMembers = 1;

    eBuildMenuOption meBuildMenuOption;

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
