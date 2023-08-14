#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"
#include "../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"

enum ePlayerDamageType
{
    EPlayerDamageType_Normal = 0,
    EPlayerDamageType_Toxic = 1,
    EPlayerDamageType_Radioactive = 2,
    EPlayerDamageType_Freeze = 3,
    EPlayerDamageType_Scorch = 4,
};
#include "../../../../metadata/source/metadata/reality/gcbreaktechbystatdata.meta.h"

class cGcPlayerDamageData
{
public:
    static const unsigned __int64 muNameHash = 0x5F9BF82F9925D932;
    static const unsigned __int64 muTemplateHash = 0x1E4BCD483220FC93;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
