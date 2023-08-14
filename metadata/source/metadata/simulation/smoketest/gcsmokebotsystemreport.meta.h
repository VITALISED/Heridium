#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/smoketest/gcsmokebotstats.meta.h"
#include "../../../../../metadata/source/metadata/simulation/smoketest/gcsmokebotplanetreport.meta.h"

class cGcSmokeBotSystemReport
{
public:
    static const unsigned __int64 muNameHash = 0xFB50309B36475BDE;
    static const unsigned __int64 muTemplateHash = 0x96998FEC48744CE6;
    static const int miNumMembers = 4;

    unsigned __int64 mui64UA;
    cGcSmokeBotStats mSystemStats;
    cGcSmokeBotStats mSpaceStats;
    cTkDynamicArray<cGcSmokeBotPlanetReport> maPlanetReports;

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
