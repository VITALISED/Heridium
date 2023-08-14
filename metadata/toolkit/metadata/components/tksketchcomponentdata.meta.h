#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/tksketchnodedata.meta.h"

class cTkSketchComponentData
{
public:
    static const unsigned __int64 muNameHash = 0xBE4097172440769E;
    static const unsigned __int64 muTemplateHash = 0xE91336066F8AE79A;
    static const int miNumMembers = 5;

    float mfGraphPosX;
    float mfGraphPosY;
    float mfGraphZoom;
    float mfUpdateRateMultiplier;
    cTkDynamicArray<cTkSketchNodeData> maNodes;

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
