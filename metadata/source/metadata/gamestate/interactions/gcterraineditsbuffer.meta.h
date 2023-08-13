#pragma once
#include "pch.h"

class cGcTerrainEditsBuffer
{
public:
    static const unsigned __int64 muNameHash = 0x28A143D89E217108;
    static const unsigned __int64 muTemplateHash = 0xFC8CD57827D81843;
    static const int miNumMembers = 6;

    cTkFixedArray<unsigned __int64, 256> maGalacticAddresses;
    cTkFixedArray<int, 256> maBufferSizes;
    cTkFixedArray<unsigned __int8, 256> maBufferAges;
    cTkFixedArray<cTkVector3, 256> maBufferAnchors;
    cTkFixedArray<bool, 256> maBufferProtected;
    cTkFixedArray<cGcTerrainEdit, 30000> maEdits;

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
