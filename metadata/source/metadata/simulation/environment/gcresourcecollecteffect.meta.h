#pragma once
#include "../../../../../pch.h"

class cGcResourceCollectEffect
{
public:
    static const unsigned __int64 muNameHash = 0xCD8F8BFF2399836A;
    static const unsigned __int64 muTemplateHash = 0x9127D9C65177A897;
    static const int miNumMembers = 13;

    float mfPlayerOffset;
    float mfSizeMin;
    float mfSizeMax;
    float mfRotateMin;
    float mfRotateMax;
    float mfStartOffsetMin;
    float mfStartOffsetMax;
    float mfTimeMin;
    float mfTimeMax;
    float mfStartSpeedMin;
    float mfStartSpeedMax;
    float mfOffsetMin;
    float mfOffsetMax;

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
