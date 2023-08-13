#pragma once

#include "../../../../../../../pch.h"
class cGcBoidData
{
    static const unsigned __int64 muNameHash = 14147345943331282994;
    static const unsigned __int64 muTemplateHash = 9184985118902309117;
    static const int miNumMembers = 11;

    float mfCoherence;
    float mfAlignment;
    float mfSeparation;
    float mfSpacing;
    float mfFollow;
    float mfDirectionBrake;
    float mfMaxSpeed;
    float mfInitTime;
    float mfInitOffset;
    float mfInitFacingOffset;
    float mfLeadTime;

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
