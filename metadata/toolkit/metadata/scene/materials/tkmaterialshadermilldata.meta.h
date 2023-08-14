#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/scene/materials/tkmaterialshadermillnode.meta.h"
#include "../../../../../metadata/toolkit/metadata/scene/materials/tkmaterialshadermilllink.meta.h"
#include "../../../../../metadata/toolkit/metadata/scene/materials/tkmaterialshadermillflag.meta.h"
#include "../../../../../metadata/toolkit/metadata/scene/materials/tkmaterialshadermillcomment.meta.h"

class cTkMaterialShaderMillData
{
public:
    static const unsigned __int64 muNameHash = 0xE5F4152C8F8FC861;
    static const unsigned __int64 muTemplateHash = 0xD94EC79A8F14C379;
    static const int miNumMembers = 9;

    cTkDynamicArray<cTkMaterialShaderMillNode> maShaderMillNodes;
    cTkDynamicArray<cTkMaterialShaderMillLink> maShaderMillLinks;
    cTkDynamicArray<cTkMaterialShaderMillFlag> maShaderMillFlags;
    cTkDynamicArray<cTkMaterialShaderMillComment> maShaderMillCmts;
    float mfScrollX;
    float mfScrollY;
    float mfZoom;
    int miOutputX;
    int miOutputY;

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
