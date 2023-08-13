#pragma once
#include "../../../../../../../pch.h"

class cGcPersistentTerrainEdits
{
    static const unsigned __int64 muNameHash = 0xC6506D02A6391EEB;
    static const unsigned __int64 muTemplateHash = 0xC359CE7CE22DC772;
    static const int miNumMembers = 4;

    unsigned __int64 mui64GalacticAddress;
    cTkDynamicArray<int> maBufferSizes;
    cTkDynamicArray<cTkVector> maBufferAnchors;
    cTkDynamicArray<cGcTerrainEdit> maEdits;

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
