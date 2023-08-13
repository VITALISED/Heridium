#pragma once

#include "../../../../../../../../pch.h"
enum eHazardModifier
{
    EHazardModifier_Temperature = 0,
    EHazardModifier_Toxicity = 1,
    EHazardModifier_Radiation = 2,
    EHazardModifier_LifeSupportDrain = 3,
    EHazardModifier_Gravity = 4,
};

class cGcHazardModifiers
{
    static const unsigned __int64 muNameHash = 10198093809066752069;
    static const unsigned __int64 muTemplateHash = 1725596684567652382;
    static const int miNumMembers = 1;

    eHazardModifier meHazardModifier;

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
