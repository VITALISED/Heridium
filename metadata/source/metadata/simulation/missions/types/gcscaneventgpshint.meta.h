#pragma once
#include "../../../../../../../../pch.h"

enum eScanEventGPSHint
{
    EScanEventGPSHint_None = 0,
    EScanEventGPSHint_Accurate = 1,
    EScanEventGPSHint_OffsetNarrow = 2,
    EScanEventGPSHint_OffsetMid = 3,
    EScanEventGPSHint_OffsetWide = 4,
    EScanEventGPSHint_Obfuscated = 5,
    EScanEventGPSHint_PartObfuscated = 6,
};

class cGcScanEventGPSHint
{
    static const unsigned __int64 muNameHash = 0x5582642D1376644E;
    static const unsigned __int64 muTemplateHash = 0x82D9D45B58591222;
    static const int miNumMembers = 1;

    eScanEventGPSHint meScanEventGPSHint;

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
