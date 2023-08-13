#pragma once
#include "pch.h"

class cTkCurveType;

enum eCoordinates
{
    ECoordinates_Polar = 0,
    ECoordinates_Cartesian = 1,
};

enum eBlendOp
{
    EBlendOp_Blend = 0,
    EBlendOp_Add = 1,
};

class cTkAnim2dBlendNode
{
public:
    static const unsigned __int64 muNameHash = 0xB08E12209E446AC4;
    static const unsigned __int64 muTemplateHash = 0xFF4AD3EEDA81AD59;
    static const int miNumMembers = 9;

    TkID<128> mNodeId;
    cTkFixedString<64,char> macPositionIn;
    float mfPositionRangeBegin;
    float mfPositionRangeEnd;
    float mfPositionSpringTime;
    cTkCurveType mPositionCurve;
    eCoordinates meCoordinates;
    eBlendOp meBlendOp;
    cTkDynamicArray<cTkAnim2dBlendNodeData1> maBlendChildren;

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
