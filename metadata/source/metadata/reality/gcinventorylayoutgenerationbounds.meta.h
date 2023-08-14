#pragma once
#include "../../../../pch.h"

class cGcInventoryLayoutGenerationBounds
{
public:
    static const unsigned __int64 muNameHash = 0xDCCAA3DA4C5BEA87;
    static const unsigned __int64 muTemplateHash = 0x720A2A40D7CB74F4;
    static const int miNumMembers = 6;

    int miMaxWidthSmall;
    int miMaxHeightSmall;
    int miMaxWidthStandard;
    int miMaxHeightStandard;
    int miMaxWidthLarge;
    int miMaxHeightLarge;

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
