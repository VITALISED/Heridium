#pragma once
#include "../../../../../../../pch.h"

class cTkCreatureTailParams
{
    static const unsigned __int64 muNameHash = 0xF5A68FEB65BA7107;
    static const unsigned __int64 muTemplateHash = 0x4EBCA4EEA1161646;
    static const int miNumMembers = 15;

    TkID<256> mPartName;
    cTkDynamicArray<cTkCreatureTailJoints> maJoints;
    float mfAnimationMix;
    float mfSwimSpeed;
    float mfSwimReps;
    float mfMaxTurnForSwim;
    float mfSwimBlendInTime;
    float mfSwimBlendOutTime;
    float mfSwimMagnitude;
    float mfSwimRollMagnitude;
    float mfSwimFallOffBegin;
    float mfSwimFallOffEnd;
    float mfMinSwimStrength;
    bool mbHorizontalStrokes;
    cTkDynamicArray<float> maPerBoneSwimStrength;

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
