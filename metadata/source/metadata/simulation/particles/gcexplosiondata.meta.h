#pragma once
#include "pch.h"

class cTkModelResource;
class cGcAudioWwiseEvents;

class cGcExplosionData
{
public:
    static const unsigned __int64 muNameHash = 0x8318BC4815036659;
    static const unsigned __int64 muTemplateHash = 0xBEE64C539734FC9B;
    static const int miNumMembers = 17;

    TkID<128> mId;
    cTkModelResource mModel;
    cGcAudioWwiseEvents mAudioEvent;
    cTkDynamicArray<cGcDebrisData1> maDebris;
    float mfLife;
    float mfScale;
    float mfDistanceScale;
    float mfDistanceScaleMax;
    bool mbCamShake;
    bool mbCamShakeSpaceScale;
    float mfShakeStrengthModifier;
    TkID<128> mShakeId;
    bool mbAllowTriggerActionOnDebris;
    bool mbAllowShootableDebris;
    bool mbAllowDestructableDebris;
    float mfMaxSpawnDistance;
    float mfCamShakeCustomMaxDistance;

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
