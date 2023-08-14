#pragma once
#include "../../../../../pch.h"

enum eEmissionRateType
{
    EEmissionRateType_PerParticle = 0,
    EEmissionRateType_Distance = 1,
};

class cTkEmitFromParticleInfo
{
public:
    static const unsigned __int64 muNameHash = 0x56A47F95DD76DC72;
    static const unsigned __int64 muTemplateHash = 0xEF8549DC9D356FDC;
    static const int miNumMembers = 2;

    int miOtherEmitterIndex;
    eEmissionRateType meEmissionRateType;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
