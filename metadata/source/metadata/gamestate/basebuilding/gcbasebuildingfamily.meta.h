#pragma once

#include "../../../../../../../pch.h"
enum eFamilyType
{
    EFamilyType_Replacements = 0,
    EFamilyType_Extras = 1,
};

class cGcBaseBuildingFamily
{
    static const unsigned __int64 muNameHash = 9246892485614728394;
    static const unsigned __int64 muTemplateHash = 16977833715237029306;
    static const int miNumMembers = 3;

    TkID<128> mID;
    eFamilyType meFamilyType;
    cTkDynamicArray<TkID<128> > maObjectIDs;

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
