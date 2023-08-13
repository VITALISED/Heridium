#pragma once
#include "pch.h"

class cTkVertexLayout;
class cTkVertexLayout;

class cTkGeometryData
{
public:
    static const unsigned __int64 muNameHash = 0xA74EA06001E7577E;
    static const unsigned __int64 muTemplateHash = 0x3705D946A3B218D4;
    static const int miNumMembers = 21;

    int miVertexCount;
    int miIndexCount;
    int miIndices16Bit;
    int miCollisionIndexCount;
    cTkDynamicArray<cTkJointBindingData1> maJointBindings;
    cTkDynamicArray<cTkJointExtentData1> maJointExtents;
    cTkDynamicArray<int1> maJointMirrorPairs;
    cTkDynamicArray<cTkJointMirrorAxis1> maJointMirrorAxes;
    cTkDynamicArray<int1> maSkinMatrixLayout;
    cTkDynamicArray<int1> maMeshVertRStart;
    cTkDynamicArray<int1> maMeshVertREnd;
    cTkDynamicArray<int1> maBoundHullVertSt;
    cTkDynamicArray<int1> maBoundHullVertEd;
    cTkDynamicArray<int1> maMeshBaseSkinMat;
    cTkDynamicArray<cTkVector41> maMeshAABBMin;
    cTkDynamicArray<cTkVector41> maMeshAABBMax;
    cTkDynamicArray<cTkVector41> maBoundHullVerts;
    cTkVertexLayout mVertexLayout;
    cTkVertexLayout mSmallVertexLayout;
    cTkDynamicArray<int1> maIndexBuffer;
    cTkDynamicArray<cTkMeshMetaData1> maStreamMetaDataArray;

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
