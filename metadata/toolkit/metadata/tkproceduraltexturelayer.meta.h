#pragma once
#include "../../../pch.h"

#include "../../../metadata/toolkit/metadata/tkproceduraltexture.meta.h"

class cTkProceduralTextureLayer
{
public:
    static const unsigned __int64 muNameHash = 0x6AA5D445686C3721;
    static const unsigned __int64 muTemplateHash = 0x5648BBC63F6738C3;
    static const int miNumMembers = 5;

    TkID<128> mName;
    float mfProbability;
    TkID<128> mGroup;
    bool mbSelectToMatchBase;
    cTkDynamicArray<cTkProceduralTexture> maTextures;

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
