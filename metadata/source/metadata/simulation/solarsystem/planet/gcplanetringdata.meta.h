#pragma once

#include "../../../../../../../../pch.h"
class cGcPlanetRingData
{
    static const unsigned __int64 muNameHash = 5011335125415609413;
    static const unsigned __int64 muTemplateHash = 11368137315032432996;
    static const int miNumMembers = 12;

    bool mbHasRings;
    cTkVector mUp;
    cTkColour mColour1;
    cTkColour mColour2;
    float mfLargeScale1;
    float mfLargeScale2;
    float mfMidScale;
    float mfSmallScale;
    float mfMidStrength;
    float mfOffset;
    float mfDepth;
    float mfAlphaMultiplier;

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
