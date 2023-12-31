#pragma once
#include "../../../../../../../pch.h"

enum eHotActionMenuTypes
{
    EHotActionMenuTypes_OnFoot = 0,
    EHotActionMenuTypes_InShip = 1,
    EHotActionMenuTypes_InExocraft = 2,
};

class cGcHotActionMenuTypes
{
public:
    static const unsigned __int64 muNameHash = 0xF0C0C2FEA5315F36;
    static const unsigned __int64 muTemplateHash = 0x631C63205D55D63D;
    static const int miNumMembers = 1;

    eHotActionMenuTypes meHotActionMenuTypes;

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
