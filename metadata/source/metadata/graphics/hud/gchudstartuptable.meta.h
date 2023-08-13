#pragma once
#include "../../../../../../../pch.h"

class cGcHUDStartupTable
{
    static const unsigned __int64 muNameHash = 0xB0A39161047DD10D;
    static const unsigned __int64 muTemplateHash = 0xF927FCB2A4A44546;
    static const int miNumMembers = 7;

    float mfFadeInFlashTime;
    float mfLookSpeed;
    float mfStartHoldTime;
    float mfButtonFlashRate;
    float mfButtonFlashAlpha;
    float mfBackgroundAlpha;
    cTkFixedArray<cGcHUDStartup> maHUDStartup;

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
