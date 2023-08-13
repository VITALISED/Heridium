#pragma once
#include "pch.h"

class cGcSpaceMapObjectData
{
public:
    static const unsigned __int64 muNameHash = 0x47334DD09E6C3FE9;
    static const unsigned __int64 muTemplateHash = 0x465E44C5E61B503;
    static const int miNumMembers = 9;

    cTkColour mColour;
    bool mbTintModel;
    float mfRadius;
    float mfDistanceMin;
    float mfDistanceRange;
    float mfScaleRange;
    float mfScaleMagnitude;
    float mfScaleMin;
    bool mbOrient;

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
