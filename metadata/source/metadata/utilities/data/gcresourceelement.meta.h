#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/tkproceduraltexturechosenoptionlist.meta.h"

class cGcResourceElement
{
public:
    static const unsigned __int64 muNameHash = 0x91CAC70AC2792E2A;
    static const unsigned __int64 muTemplateHash = 0x1F488BEDB7326A29;
    static const int miNumMembers = 5;

    cTkFixedString<128,char> macFilename;
    cTkSmartResHandle mResHandle;
    cTkSeed mSeed;
    cTkFixedString<512,char> macAltId;
    cTkProceduralTextureChosenOptionList mProceduralTexture;

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
