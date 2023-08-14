#pragma once
#include "../../../../../pch.h"

enum eDiet
{
    EDiet_Carnivore = 0,
    EDiet_Omnivore = 1,
    EDiet_Herbivore = 2,
    EDiet_Robot = 3,
};

class cGcCreatureDiet
{
public:
    static const unsigned __int64 muNameHash = 0xEF306B43D1C79D7F;
    static const unsigned __int64 muTemplateHash = 0xD8BBB83FF622C3C4;
    static const int miNumMembers = 1;

    eDiet meDiet;

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
