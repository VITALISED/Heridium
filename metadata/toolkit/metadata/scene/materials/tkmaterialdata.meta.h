#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/scene/materials/tkmaterialflags.meta.h"
#include "../../../../../metadata/toolkit/metadata/scene/materials/tkmaterialuniform.meta.h"
#include "../../../../../metadata/toolkit/metadata/scene/materials/tkmaterialsampler.meta.h"

class cTkMaterialData
{
public:
    static const unsigned __int64 muNameHash = 0xCEE695A798E64B92;
    static const unsigned __int64 muTemplateHash = 0x8EDA510D7237BB69;
    static const int miNumMembers = 13;

    cTkFixedString<128,char> macName;
    cTkFixedString<256,char> macMetamaterial;
    cTkFixedString<32,char> macClass;
    int miTransparencyLayerID;
    bool mbCastShadow;
    bool mbDisableZTest;
    bool mbCreateFur;
    cTkFixedString<128,char> macLink;
    cTkFixedString<128,char> macShader;
    cTkDynamicArray<cTkMaterialFlags> maFlags;
    cTkDynamicArray<cTkMaterialUniform> maUniforms;
    cTkDynamicArray<cTkMaterialSampler> maSamplers;
    __int64 mi64ShaderMillDataHash;

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
