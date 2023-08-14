#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/graphics/hud/gchudstartup.meta.h"

class cGcHUDStartupTable
{
public:
    static const unsigned __int64 muNameHash = 0xB0A39161047DD10D;
    static const unsigned __int64 muTemplateHash = 0xF927FCB2A4A44546;
    static const int miNumMembers = 7;

    float mfFadeInFlashTime;
    float mfLookSpeed;
    float mfStartHoldTime;
    float mfButtonFlashRate;
    float mfButtonFlashAlpha;
    float mfBackgroundAlpha;
    cTkFixedArray<cGcHUDStartup, 13> maHUDStartup;

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
