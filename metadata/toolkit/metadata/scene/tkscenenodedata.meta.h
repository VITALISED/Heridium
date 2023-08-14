#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/scene/tktransformdata.meta.h"
#include "../../../../metadata/toolkit/metadata/scene/tkscenenodeattributedata.meta.h"
#include "../../../../metadata/toolkit/metadata/scene/tkscenenodedata.meta.h"

class cTkSceneNodeData
{
public:
    static const unsigned __int64 muNameHash = 0x2C1B6B0E807F7193;
    static const unsigned __int64 muTemplateHash = 0x1DCCBBEBB4547EB4;
    static const int miNumMembers = 6;

    cTkFixedString<128,char> macName;
    unsigned int muiNameHash;
    TkID<128> mType;
    cTkTransformData mTransform;
    cTkDynamicArray<cTkSceneNodeAttributeData> maAttributes;
    cTkDynamicArray<cTkSceneNodeData> maChildren;

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
