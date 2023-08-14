#pragma once
#include "../../../../../../pch.h"

enum eFreighterBaseGenerationMode
{
    EFreighterBaseGenerationMode_Prefab = 0,
    EFreighterBaseGenerationMode_WFC = 1,
};
#include "../../../../../../metadata/source/metadata/simulation/gcfreighterbaseoptions.meta.h"

class cGcFreighterBaseComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x8201F7ADD0F5959D;
    static const unsigned __int64 muTemplateHash = 0xF6A553967FD2E51B;
    static const int miNumMembers = 4;

    eFreighterBaseGenerationMode meFreighterBaseGenerationMode;
    cTkFixedArray<cGcFreighterBaseOptions, 4> maFreighterBaseOptions;
    cTkFixedString<128,char> macFreighterBaseForPlayerReset;
    cTkFixedString<128,char> macWFCBuildingFile;

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
