#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/animation/tkcurvetype.meta.h"

class cGcProjectileLineData
{
public:
    static const unsigned __int64 muNameHash = 0xF7D92F84640D5A1D;
    static const unsigned __int64 muTemplateHash = 0xA065C08AD05D6180;
    static const int miNumMembers = 10;

    float mfBulletLength;
    float mfBulletGlowWidthTime;
    float mfBulletGlowWidthMax;
    float mfBulletGlowWidthMin;
    cTkCurveType mBulletGlowWidthCurve;
    float mfBulletScaler;
    float mfBulletScalerMinDist;
    float mfBulletScalerMaxDist;
    float mfBulletMinScaleDistance;
    float mfBulletMaxScaleDistance;

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
