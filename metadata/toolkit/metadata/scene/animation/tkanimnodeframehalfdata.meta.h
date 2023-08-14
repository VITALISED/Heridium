#pragma once
#include "../../../../../pch.h"

class cTkAnimNodeFrameHalfData
{
public:
    static const unsigned __int64 muNameHash = 0xFD9A1D5E0981C57C;
    static const unsigned __int64 muTemplateHash = 0x1F03D88C79D4545B;
    static const int miNumMembers = 3;

    cTkDynamicArray<unsigned __int16> maRotations;
    cTkDynamicArray<cTkHalfVector4> maTranslations;
    cTkDynamicArray<cTkHalfVector4> maScales;

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
