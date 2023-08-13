#pragma once

#include "../../../../../../../pch.h"
class cGcCharacterLookAtData
{
    static const unsigned __int64 muNameHash = 6227530342258972722;
    static const unsigned __int64 muTemplateHash = 5284140309151478301;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
