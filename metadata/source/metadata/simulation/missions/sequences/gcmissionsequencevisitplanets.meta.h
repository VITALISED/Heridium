#pragma once
#include "pch.h"

class cGcMissionSequenceVisitPlanets
{
public:
    static const unsigned __int64 muNameHash = 0xA6EC06362FCAD424;
    static const unsigned __int64 muTemplateHash = 0xFD0F5CEB9C4534CA;
    static const int miNumMembers = 6;

    cTkFixedString<128,char> macMessage;
    cTkDynamicArray<cGcBiomeType1> maPlanetTypesToWatch;
    bool mbMustAlsoDiscover;
    int miNumberOfEachToDiscover;
    bool mbTakeNumberFromSeasonalData;
    cTkFixedString<128,char> macDebugText;

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
