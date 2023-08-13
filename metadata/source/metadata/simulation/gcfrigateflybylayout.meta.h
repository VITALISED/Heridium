#pragma once

#include "../../../../../../pch.h"
class cGcFrigateFlybyType;

class cGcFrigateFlybyLayout
{
    static const unsigned __int64 muNameHash = 12806362726447573577;
    static const unsigned __int64 muTemplateHash = 15298430018312326853;
    static const int miNumMembers = 6;

    cGcFrigateFlybyType mFlybyType;
    float mfInitialSpeed;
    float mfTargetSpeed;
    float mfInterestTime;
    float mfInterestDistance;
    cTkDynamicArray<cGcFrigateFlybyOption> maFrigates;

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
