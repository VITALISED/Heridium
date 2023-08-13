#pragma once
#include "../../../../../../pch.h"

enum eSectorName
{
    ESectorName_Generic = 0,
    ESectorName_Elevated = 1,
    ESectorName_Low = 2,
    ESectorName_Trees = 3,
    ESectorName_LushTrees = 4,
    ESectorName_Lush = 5,
    ESectorName_Wet = 6,
    ESectorName_Cave = 7,
    ESectorName_Dead = 8,
    ESectorName_Buildings = 9,
    ESectorName_Water = 10,
    ESectorName_Ice = 11,
};

class cGcNameGeneratorSectorTypes
{
    static const unsigned __int64 muNameHash = 0x2FBB792E633BA89B;
    static const unsigned __int64 muTemplateHash = 0x7DFB66DB33ABB5EA;
    static const int miNumMembers = 1;

    eSectorName meSectorName;

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
