#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/audio/gcbytebeattoken.meta.h"
#include "../../../../metadata/source/metadata/audio/gcbytebeattemplate.meta.h"

class cGcByteBeatTemplate
{
public:
    static const unsigned __int64 muNameHash = 0xB764F802BDE36ADF;
    static const unsigned __int64 muTemplateHash = 0x972ED2E5C097966E;
    static const int miNumMembers = 5;

    float mfWeight;
    cGcByteBeatToken mTokenType;
    int miMinValue;
    int miMaxValue;
    cTkDynamicArray<cGcByteBeatTemplate> maChildren;

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
