#pragma once
#include "../../../../pch.h"

enum eMarkovSelector
{
    EMarkovSelector_Generic = 0,
    EMarkovSelector_Mineral = 1,
    EMarkovSelector_Region_NO = 2,
    EMarkovSelector_Region_RU = 3,
    EMarkovSelector_Region_CH = 4,
    EMarkovSelector_Region_JP = 5,
    EMarkovSelector_Region_LT = 6,
    EMarkovSelector_Region_FL = 7,
};

class cGcNameGeneratorTypes
{
public:
    static const unsigned __int64 muNameHash = 0xC9FA06A9CF2CE65D;
    static const unsigned __int64 muTemplateHash = 0xF92787E043F5AC70;
    static const int miNumMembers = 1;

    eMarkovSelector meMarkovSelector;

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
