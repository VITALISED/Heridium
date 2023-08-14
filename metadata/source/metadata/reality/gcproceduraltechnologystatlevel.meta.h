#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/stats/gcstatstypes.meta.h"
#include "../../../../metadata/source/metadata/reality/gcweightingcurve.meta.h"

class cGcProceduralTechnologyStatLevel
{
public:
    static const unsigned __int64 muNameHash = 0xF41CD566C844982A;
    static const unsigned __int64 muTemplateHash = 0xDD37A59489020326;
    static const int miNumMembers = 5;

    cGcStatsTypes mStat;
    float mfValueMin;
    float mfValueMax;
    cGcWeightingCurve mWeightingCurve;
    bool mbAlwaysChoose;

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
