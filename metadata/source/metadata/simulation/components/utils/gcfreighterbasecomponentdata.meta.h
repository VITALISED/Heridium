#pragma once

#include "../../../../../../../../pch.h"
enum eFreighterBaseGenerationMode
{
    EFreighterBaseGenerationMode_Prefab = 0,
    EFreighterBaseGenerationMode_WFC = 1,
};

class cGcFreighterBaseComponentData
{
    static const unsigned __int64 muNameHash = 9368041025814500765;
    static const unsigned __int64 muTemplateHash = 17772703410342257947;
    static const int miNumMembers = 4;

    eFreighterBaseGenerationMode meFreighterBaseGenerationMode;
    cTkFixedArray<cGcFreighterBaseOptions> maFreighterBaseOptions;
    cTkFixedString<128,char> macFreighterBaseForPlayerReset;
    cTkFixedString<128,char> macWFCBuildingFile;

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
