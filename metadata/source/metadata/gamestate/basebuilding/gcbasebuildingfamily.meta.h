#pragma once
#include "../../../../../pch.h"

enum eFamilyType
{
    EFamilyType_Replacements = 0,
    EFamilyType_Extras = 1,
};

class cGcBaseBuildingFamily
{
public:
    static const unsigned __int64 muNameHash = 0x80538FB9394B74CA;
    static const unsigned __int64 muTemplateHash = 0xEB9D61CFC45A85BA;
    static const int miNumMembers = 3;

    TkID<128> mID;
    eFamilyType meFamilyType;
    cTkDynamicArray<TkID<128> > maObjectIDs;

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
