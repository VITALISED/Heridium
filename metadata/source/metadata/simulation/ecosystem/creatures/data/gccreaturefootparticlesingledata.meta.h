#pragma once

#include "../../../../../../../../../pch.h"
enum eMoveSpeed
{
    EMoveSpeed_Always = 0,
    EMoveSpeed_Walk = 1,
    EMoveSpeed_Run = 2,
};

class cGcCreatureFootParticleSingleData
{
    static const unsigned __int64 muNameHash = 10146809180271245116;
    static const unsigned __int64 muTemplateHash = 10428084417911788982;
    static const int miNumMembers = 5;

    TkID<128> mEffectName;
    float mfScale;
    float mfMinCreatureSize;
    float mfMaxCreatureSize;
    eMoveSpeed meMoveSpeed;

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
