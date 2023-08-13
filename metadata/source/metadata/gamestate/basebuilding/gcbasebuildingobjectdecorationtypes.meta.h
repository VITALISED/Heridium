#pragma once

#include "../../../../../../../pch.h"
enum eBaseBuildingDecorationType
{
    EBaseBuildingDecorationType_Normal = 0,
    EBaseBuildingDecorationType_SurfaceNormal = 1,
    EBaseBuildingDecorationType_Ceiling = 2,
    EBaseBuildingDecorationType_Terrain = 3,
    EBaseBuildingDecorationType_Substance = 4,
    EBaseBuildingDecorationType_Plant = 5,
    EBaseBuildingDecorationType_BuildingSurfaceNormal = 6,
};

class cGcBaseBuildingObjectDecorationTypes
{
    static const unsigned __int64 muNameHash = 14696241898169631534;
    static const unsigned __int64 muTemplateHash = 9487787487323536413;
    static const int miNumMembers = 1;

    eBaseBuildingDecorationType meBaseBuildingDecorationType;

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
