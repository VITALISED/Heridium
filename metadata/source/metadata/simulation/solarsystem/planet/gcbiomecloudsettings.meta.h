#pragma once

#include "../../../../../../../../pch.h"
class cGcBiomeCloudSettings
{
    static const unsigned __int64 muNameHash = 9178762345606279347;
    static const unsigned __int64 muTemplateHash = 12289473284599080179;
    static const int miNumMembers = 11;

    float mfMinCover;
    float mfMaxCover;
    float mfMinVariance;
    float mfMaxVariance;
    float mfMinRateOfChange;
    float mfMaxRateOfChange;
    float mfMinRatio;
    float mfMaxRatio;
    float mfTendencyTowardsBeingCloudy;
    cTkColour mStormCloudTopColour;
    cTkColour mStormCloudBottomColour;

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
