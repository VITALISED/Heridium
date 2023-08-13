#pragma once
#include "../../../../../../../../pch.h"

class cGcPetBehaviours;
class cGcCreaturePetTraits;

class cGcPetFollowUpBehaviour
{
    static const unsigned __int64 muNameHash = 0xA03E661BB27C6E6A;
    static const unsigned __int64 muTemplateHash = 0xD9E238B0102214C;
    static const int miNumMembers = 7;

    cGcPetBehaviours mBehaviour;
    bool mbTraitBased;
    cGcCreaturePetTraits mTrait;
    float mfTraitMin;
    float mfTraitMax;
    float mfWeightMin;
    float mfWeightMax;

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
