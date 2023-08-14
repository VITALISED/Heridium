#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/graphics/hud/gcpunctuationdelay.meta.h"

class cGcPunctuationDelayData
{
public:
    static const unsigned __int64 muNameHash = 0x550D77569C679867;
    static const unsigned __int64 muTemplateHash = 0x8C9ABF2C23D96E50;
    static const int miNumMembers = 2;

    cTkDynamicArray<cGcPunctuationDelay> maPunctuationList;
    float mfDefaultDelay;

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
