#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/scene/geometry/tkjointbindingdata.meta.h"
#include "../../../../../metadata/toolkit/metadata/scene/geometry/tkjointextentdata.meta.h"
#include "../../../../../metadata/toolkit/metadata/scene/geometry/tkjointmirroraxis.meta.h"
#include "../../../../../metadata/toolkit/metadata/scene/geometry/tkvertexlayout.meta.h"
#include "../../../../../metadata/toolkit/metadata/scene/geometry/tkmeshmetadata.meta.h"

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
    cTkDynamicArray<cTkJointBindingData> maJointBindings;
    cTkDynamicArray<cTkJointExtentData> maJointExtents;
    cTkDynamicArray<int> maJointMirrorPairs;
    cTkDynamicArray<cTkJointMirrorAxis> maJointMirrorAxes;
    cTkDynamicArray<int> maSkinMatrixLayout;
    cTkDynamicArray<int> maMeshVertRStart;
    cTkDynamicArray<int> maMeshVertREnd;
    cTkDynamicArray<int> maBoundHullVertSt;
    cTkDynamicArray<int> maBoundHullVertEd;
    cTkDynamicArray<int> maMeshBaseSkinMat;
    cTkDynamicArray<cTkVector4> maMeshAABBMin;
    cTkDynamicArray<cTkVector4> maMeshAABBMax;
    cTkDynamicArray<cTkVector4> maBoundHullVerts;
    cTkVertexLayout mVertexLayout;
    cTkVertexLayout mSmallVertexLayout;
    cTkDynamicArray<int> maIndexBuffer;
    cTkDynamicArray<cTkMeshMetaData> maStreamMetaDataArray;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
