#pragma once

#include "../../../../../../../pch.h"
class cGcLinkNetworkTypes;

class cGcBaseGridSearchFilter
{
    static const unsigned __int64 muNameHash = 11824321546476984849;
    static const unsigned __int64 muTemplateHash = 5774238978313250536;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
