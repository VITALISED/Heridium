#pragma once
#include "../../../../../../../pch.h"

enum eRestriction
{
    ERestriction_NoMoreThan = 0,
    ERestriction_AtLeast = 1,
    ERestriction_AtLeastIfICan = 2,
};

class cTkLSystemRestrictionData
{
    static const unsigned __int64 muNameHash = 0x2CE937F1C349DD12;
    static const unsigned __int64 muTemplateHash = 0xF3991C126F82FBD;
    static const int miNumMembers = 2;

    int miAmount;
    eRestriction meRestriction;

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
