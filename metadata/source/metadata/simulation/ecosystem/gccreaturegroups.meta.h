#pragma once
#include "../../../../../pch.h"

enum eCreatureGroup
{
    ECreatureGroup_Solo = 0,
    ECreatureGroup_Couple = 1,
    ECreatureGroup_Group = 2,
    ECreatureGroup_Herd = 3,
};

class cGcCreatureGroups
{
public:
    static const unsigned __int64 muNameHash = 0xDC6AC60910C16B2D;
    static const unsigned __int64 muTemplateHash = 0xA69F70739493EEEE;
    static const int miNumMembers = 1;

    eCreatureGroup meCreatureGroup;

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
