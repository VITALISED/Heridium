#pragma once
#include "../../../../../../pch.h"

class cTkCurveType;
class cTkCurveType;

class cGcPhotoModeAdjustData
{
    static const unsigned __int64 muNameHash = 0x6F5F53519B901CD4;
    static const unsigned __int64 muTemplateHash = 0x89656832E5D5FE94;
    static const int miNumMembers = 6;

    float mfAdjustMin;
    cTkCurveType mAdjustMinCurve;
    float mfAdjustMax;
    float mfAdjustMaxRange;
    cTkCurveType mAdjustMaxCurve;
    bool mbInverted;

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
