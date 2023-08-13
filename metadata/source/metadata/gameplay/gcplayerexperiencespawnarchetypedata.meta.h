#pragma once
#include "../../../../../../pch.h"

class cGcCreatureTypes;

class cGcPlayerExperienceSpawnArchetypeData
{
    static const unsigned __int64 muNameHash = 0x3D6AF30F10DB0EAA;
    static const unsigned __int64 muTemplateHash = 0x4905A18AC39B865;
    static const int miNumMembers = 15;

    TkID<128> mId;
    TkID<128> mGenerateResource;
    cGcCreatureTypes mType;
    float mfScale;
    float mfScaleVariation;
    TkID<128> mAppearAnim;
    float mfSpeedMultiplier;
    int miHealthOverride;
    TkID<128> mDamageOverride;
    TkID<128> mDamageReceivedMultiplier;
    float mfSpawnDistOverride;
    float mfDespawnDistOverride;
    TkID<128> mBehaviourTreeOverride;
    cTkDynamicArray<cTkClassPointer> maBehaviourOverrides;
    cTkDynamicArray<cTkClassPointer> maBlackboardValues;

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
