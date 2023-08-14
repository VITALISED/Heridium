#pragma once
#include "../../../../../../pch.h"

enum eHazardValue
{
    EHazardValue_Ambient = 0,
    EHazardValue_Water = 1,
    EHazardValue_Cave = 2,
    EHazardValue_Storm = 3,
    EHazardValue_Night = 4,
};

class cGcHazardValueTypes
{
public:
    static const unsigned __int64 muNameHash = 0x34F3A56DC1D3CE80;
    static const unsigned __int64 muTemplateHash = 0xDBE375351057547B;
    static const int miNumMembers = 1;

    eHazardValue meHazardValue;

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
