#pragma once

#include "../../../../../../../../pch.h"
enum eHeadUpAxis
{
    EHeadUpAxis_X = 0,
    EHeadUpAxis_XNeg = 1,
    EHeadUpAxis_Y = 2,
    EHeadUpAxis_YNeg = 3,
    EHeadUpAxis_Z = 4,
    EHeadUpAxis_ZNeg = 5,
};

class cGcCreatureFullBodyIKComponentData
{
    static const unsigned __int64 muNameHash = 8364685072177287319;
    static const unsigned __int64 muTemplateHash = 15512339033853575233;
    static const int miNumMembers = 17;

    cTkDynamicArray<cGcCreatureIkData> maJointData;
    cTkDynamicArray<cGcIkPistonData> maPistonData;
    eHeadUpAxis meHeadUpAxis;
    float mfMaxHeadPitch;
    float mfMaxHeadRoll;
    float mfMaxHeadYaw;
    float mfBodyMassWeight;
    float mfOmega;
    float mfOmegaDropOff;
    float mfMovementDamp;
    bool mbUseFootGlue;
    float mfFootPlantSpringTime;
    bool mbUseFootAngle;
    float mfFootAngleSpeed;
    float mfMaxFootAngle;
    bool mbUsePistons;
    bool mbMech;

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