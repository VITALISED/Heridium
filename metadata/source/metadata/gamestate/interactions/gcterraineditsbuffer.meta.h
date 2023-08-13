#pragma once

#include "../../../../../../../pch.h"
class cGcTerrainEditsBuffer
{
    static const unsigned __int64 muNameHash = 2927695830412521736;
    static const unsigned __int64 muTemplateHash = 18198154906338596931;
    static const int miNumMembers = 6;

    cTkFixedArray<unsigned __int64> maGalacticAddresses;
    cTkFixedArray<int> maBufferSizes;
    cTkFixedArray<unsigned __int8> maBufferAges;
    cTkFixedArray<cTkVector> maBufferAnchors;
    cTkFixedArray<bool> maBufferProtected;
    cTkFixedArray<cGcTerrainEdit> maEdits;

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
