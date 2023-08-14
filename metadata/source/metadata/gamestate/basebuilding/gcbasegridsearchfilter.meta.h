#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gclinknetworktypes.meta.h"

class cGcBaseGridSearchFilter
{
public:
    static const unsigned __int64 muNameHash = 0xA4186DCC6FC21A11;
    static const unsigned __int64 muTemplateHash = 0x502237C1EE9366E8;
    static const int miNumMembers = 14;

    cGcLinkNetworkTypes mNetworkType;
    int miPartRateIsGreaterThan;
    int miPartRateIsLessThan;
    int miGridRateIsGreaterThan;
    int miGridRateIsLessThan;
    bool mbGridHasANegativeRate;
    bool mbGridHasAPositiveRate;
    bool mbGridIsOnline;
    bool mbGridIsNotOnline;
    int miGridHasMinParts;
    int miGridHasMaxParts;
    int miGridHasMinNonPassiveParts;
    int miGridHasMaxNonPassiveParts;
    bool mbGridHasPositiveRatePotential;

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
