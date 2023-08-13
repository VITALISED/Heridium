#pragma once
#include "pch.h"

enum eAerialViewMode
{
    EAerialViewMode_FaceDown = 0,
    EAerialViewMode_FaceOut = 1,
    EAerialViewMode_FaceDownThenOut = 2,
};
class cTkCurveType;
class cTkCurveType;
class cTkCurveType;

class cGcCameraAerialViewData
{
public:
    static const unsigned __int64 muNameHash = 0x7AB4D686179F9F82;
    static const unsigned __int64 muTemplateHash = 0xF1087A135ED0653B;
    static const int miNumMembers = 12;

    float mfTime;
    eAerialViewMode meAerialViewMode;
    float mfTimeBack;
    float mfStartTime;
    float mfPauseTime;
    float mfDistance;
    float mfTargetOffsetAngle;
    int miStages;
    float mfSpeedLineDist;
    cTkCurveType mCurve;
    cTkCurveType mCurveDown;
    cTkCurveType mSlerpCurve;

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
