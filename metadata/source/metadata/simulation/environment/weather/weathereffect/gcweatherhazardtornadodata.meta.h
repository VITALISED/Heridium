#pragma once
#include "../../../../../../../../../pch.h"

class cGcWeatherHazardTornadoData
{
    static const unsigned __int64 muNameHash = 0x10FCB49CBC61F8AA;
    static const unsigned __int64 muTemplateHash = 0xEDF56AAFCEDF7863;
    static const int miNumMembers = 6;

    float mfSuckInRadius;
    float mfSuckInStrength;
    float mfSuckUpRadius;
    float mfSuckUpStrength;
    float mfSuckUpHeight;
    float mfSuckUpHeightCutoff;

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
