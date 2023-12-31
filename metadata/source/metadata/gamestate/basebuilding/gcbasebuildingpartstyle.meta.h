#pragma once
#include "../../../../../pch.h"

enum eStyle
{
    EStyle_None = 0,
    EStyle_Wood = 1,
    EStyle_Metal = 2,
    EStyle_Concrete = 3,
    EStyle_Stone = 4,
    EStyle_Timber = 5,
    EStyle_Fibreglass = 6,
};

class cGcBaseBuildingPartStyle
{
public:
    static const unsigned __int64 muNameHash = 0xCEBA5F1259779D68;
    static const unsigned __int64 muTemplateHash = 0xA63C1943EC1792A2;
    static const int miNumMembers = 1;

    eStyle meStyle;

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
