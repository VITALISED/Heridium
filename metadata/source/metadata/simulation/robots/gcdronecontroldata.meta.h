#pragma once

#include "../../../../../../../pch.h"
class cGcDroneControlData
{
    static const unsigned __int64 muNameHash = 17681664948182132382;
    static const unsigned __int64 muTemplateHash = 16948080988723704506;
    static const int miNumMembers = 12;

    float mfMaxSpeed;
    float mfStrength;
    float mfDirectionBrake;
    float mfMinHeight;
    float mfMaxHeight;
    float mfMaxPitch;
    float mfHeightAdjustStrength;
    float mfHeightAdjustDownStrength;
    float mfLookStrength;
    float mfStopTime;
    float mfRepelForce;
    float mfRepelRange;

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
