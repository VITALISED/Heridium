#pragma once

#include "../../../../../../../pch.h"
enum eObjectRenderType
{
    EObjectRenderType_Instanced = 0,
    EObjectRenderType_Single = 1,
};

enum eSizeClass
{
    ESizeClass_Tiny = 0,
    ESizeClass_Small = 1,
    ESizeClass_Medium = 2,
    ESizeClass_Large = 3,
    ESizeClass_Massive = 4,
};

enum eObjectCoverageType
{
    EObjectCoverageType_Blanket = 0,
    EObjectCoverageType_Cluster = 1,
    EObjectCoverageType_Solo = 2,
};

enum eLifeType
{
    ELifeType_Rock = 0,
    ELifeType_DryPlant = 1,
    ELifeType_LushPlant = 2,
    ELifeType_Artificial = 3,
};

enum eLocationType
{
    ELocationType_AboveGround = 0,
    ELocationType_UnderGround = 1,
    ELocationType_WaterSurface = 2,
    ELocationType_UnderWater = 3,
};

enum eObjectAlignment
{
    EObjectAlignment_Upright = 0,
    EObjectAlignment_SlightOffsetFromUpright = 1,
    EObjectAlignment_LargeOffsetFromUpright = 2,
    EObjectAlignment_ToNormal = 3,
    EObjectAlignment_SlightOffsetFromNormal = 4,
    EObjectAlignment_LargeOffsetFromNormal = 5,
};

class cGcObjectDefinitionData
{
    static const unsigned __int64 muNameHash = 17779090825794007396;
    static const unsigned __int64 muTemplateHash = 18217146181200784893;
    static const int miNumMembers = 9;

    cTkFixedString<128,char> macFilename;
    eObjectRenderType meObjectRenderType;
    bool mbAutoCollision;
    bool mbMatchGroundColour;
    eSizeClass meSizeClass;
    eObjectCoverageType meObjectCoverageType;
    eLifeType meLifeType;
    eLocationType meLocationType;
    eObjectAlignment meObjectAlignment;

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
