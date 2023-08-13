#pragma once

#include "../../../../../../pch.h"
enum eCreatureRarity
{
    ECreatureRarity_Common = 0,
    ECreatureRarity_Uncommon = 1,
    ECreatureRarity_Rare = 2,
    ECreatureRarity_SuperRare = 3,
};

class cGcCreatureRarity
{
    static const unsigned __int64 muNameHash = 6904375423713304271;
    static const unsigned __int64 muTemplateHash = 8862462517683645305;
    static const int miNumMembers = 1;

    eCreatureRarity meCreatureRarity;

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
