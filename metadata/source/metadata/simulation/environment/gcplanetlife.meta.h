#pragma once
#include "../../../../../../../pch.h"

enum eLifeSetting
{
    ELifeSetting_Dead = 0,
    ELifeSetting_Low = 1,
    ELifeSetting_Mid = 2,
    ELifeSetting_Full = 3,
};

class cGcPlanetLife
{
    static const unsigned __int64 muNameHash = 0x1E27C6F2466B2426;
    static const unsigned __int64 muTemplateHash = 0xC0116FA38588CC26;
    static const int miNumMembers = 1;

    eLifeSetting meLifeSetting;

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
