#pragma once

#include "../../../../../../pch.h"
class cTkTransformData;

class cTkSceneNodeData
{
    static const unsigned __int64 muNameHash = 3178251672069566867;
    static const unsigned __int64 muTemplateHash = 2147297743366028980;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
