#pragma once
#include "pch.h"

class cGcFrigateFlybyType;

class cGcFrigateFlybyLayout
{
public:
    static const unsigned __int64 muNameHash = 0xB1B9570C76B5EA49;
    static const unsigned __int64 muTemplateHash = 0xD44EF10C0EADCEC5;
    static const int miNumMembers = 6;

    cGcFrigateFlybyType mFlybyType;
    float mfInitialSpeed;
    float mfTargetSpeed;
    float mfInterestTime;
    float mfInterestDistance;
    cTkDynamicArray<cGcFrigateFlybyOption1> maFrigates;

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
