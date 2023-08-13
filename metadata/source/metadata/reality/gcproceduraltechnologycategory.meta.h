#pragma once
#include "../../../../../../pch.h"

enum eProceduralTechnologyCategory
{
    EProceduralTechnologyCategory_None = 0,
    EProceduralTechnologyCategory_Combat = 1,
    EProceduralTechnologyCategory_Mining = 2,
    EProceduralTechnologyCategory_Scanning = 3,
    EProceduralTechnologyCategory_Protection = 4,
};

class cGcProceduralTechnologyCategory
{
    static const unsigned __int64 muNameHash = 0xE46F247D87F34DBC;
    static const unsigned __int64 muTemplateHash = 0xDCAA6E426437853B;
    static const int miNumMembers = 1;

    eProceduralTechnologyCategory meProceduralTechnologyCategory;

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
