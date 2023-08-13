#pragma once
#include "pch.h"

class cGcByteBeatEnvelope;
class cGcByteBeatEnvelope;
class cGcByteBeatWave;

enum eAugmentMode
{
    EAugmentMode_Add = 0,
    EAugmentMode_Multiply = 1,
    EAugmentMode_Max = 2,
};

class cGcByteBeatDrum
{
public:
    static const unsigned __int64 muNameHash = 0xAAB4AB6EC567BC2F;
    static const unsigned __int64 muTemplateHash = 0xF8AAFC9337502934;
    static const int miNumMembers = 14;

    cTkFixedString<64,char> macTree;
    float mfVolume;
    float mfDuration;
    float mfOctaveShift;
    cGcByteBeatEnvelope mAttackEnvelope;
    cGcByteBeatEnvelope mDecayEnvelope;
    cGcByteBeatWave mWaveType;
    float mfAugmentVolume;
    float mfAugmentOverdrive;
    float mfAugmentSineNoiseMix;
    float mfAugmentPitch;
    float mfAugmentPitchFalloff;
    float mfAugmentPitchFalloffPower;
    eAugmentMode meAugmentMode;

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
