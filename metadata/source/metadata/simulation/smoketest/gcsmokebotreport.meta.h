#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/smoketest/gcsmokebotsystemreport.meta.h"

class cGcSmokeBotReport
{
public:
    static const unsigned __int64 muNameHash = 0x16AC643981D10CC9;
    static const unsigned __int64 muTemplateHash = 0x79B1C8F92E065DCC;
    static const int miNumMembers = 2;

    unsigned __int64 mui64StartingUA;
    cTkDynamicArray<cGcSmokeBotSystemReport> maSystems;

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
