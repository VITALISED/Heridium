#pragma once

#include "../../../../../../../pch.h"
class cTkCurveType;

class cGcProjectileLineData
{
    static const unsigned __int64 muNameHash = 17859358042975197725;
    static const unsigned __int64 muTemplateHash = 11557855721150046592;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
