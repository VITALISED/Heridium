#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/tkmodelresource.meta.h"

class cGcDebrisData
{
public:
    static const unsigned __int64 muNameHash = 0xC9F6512AC970CD07;
    static const unsigned __int64 muTemplateHash = 0xD16BDF2B722D86A9;
    static const int miNumMembers = 7;

    cTkModelResource mFilename;
    int miNumber;
    float mfRadius;
    float mfScale;
    float mfSpeed;
    float mfAnglularSpeed;
    cTkSeed mOverrideSeed;

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
