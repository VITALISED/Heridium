#pragma once

#include "../../../../../../../pch.h"
class cGcSmokeBotStats;
class cGcSmokeBotStats;

class cGcSmokeBotSystemReport
{
    static const unsigned __int64 muNameHash = 18109027544845474782;
    static const unsigned __int64 muTemplateHash = 10851863022116556006;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
