#pragma once
#include "../../../../../pch.h"

class cGcCharacterLookAtData
{
public:
    static const unsigned __int64 muNameHash = 0x566CA1D9F6501832;
    static const unsigned __int64 muTemplateHash = 0x4955099D564BF21D;
    static const int miNumMembers = 13;

    float mfInteractionLookAtRadius;
    float mfCreatureLookAtRadius;
    float mfSpaceshipLookAtRadius;
    float mfLookAtRunGlanceMinTime;
    float mfLookAtRunGlanceMaxTime;
    float mfLookAtRunMinTime;
    float mfLookAtRunMaxTime;
    float mfLookAtTargetGlanceMinTime;
    float mfLookAtTargetGlanceMaxTime;
    float mfLookAtTargetWaitMinTime;
    float mfLookAtTargetWaitMaxTime;
    float mfLookAtMaxYaw;
    float mfLookAtMaxPitch;

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
