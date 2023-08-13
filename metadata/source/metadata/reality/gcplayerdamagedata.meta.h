#pragma once

#include "../../../../../../pch.h"
class cTkTextureResource;
class cGcAudioWwiseEvents;
class cGcAudioWwiseEvents;

enum ePlayerDamageType
{
    EPlayerDamageType_Normal = 0,
    EPlayerDamageType_Toxic = 1,
    EPlayerDamageType_Radioactive = 2,
    EPlayerDamageType_Freeze = 3,
    EPlayerDamageType_Scorch = 4,
};

class cGcPlayerDamageData
{
    static const unsigned __int64 muNameHash = 6889372938309851442;
    static const unsigned __int64 muTemplateHash = 2183064154353499283;
    static const int miNumMembers = 20;

    TkID<128> mId;
    TkID<256> mDeathMessage;
    TkID<128> mDeathStat;
    cTkTextureResource mHitIcon;
    TkID<256> mHitChatMessage;
    TkID<256> mHitMessage;
    cGcAudioWwiseEvents mHitMessageAudio;
    TkID<256> mCriticalHitMessage;
    cGcAudioWwiseEvents mCriticalHitMessageAudio;
    float mfDamage;
    float mfPushForce;
    float mfCameraTurn;
    TkID<128> mCameraShakeShield;
    TkID<128> mCameraShakeNoShield;
    bool mbShowTrackIcon;
    bool mbForceDamageInInteraction;
    bool mbAllowDeathInInteraction;
    ePlayerDamageType mePlayerDamageType;
    cTkDynamicArray<cGcBreakTechByStatData> maDamageTechWithStat;
    float mfTechDamageChance;

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
