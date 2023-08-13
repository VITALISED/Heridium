#pragma once
#include "../../../../../../../../pch.h"

enum eCreatureRoleFrequencyModifier
{
    ECreatureRoleFrequencyModifier_Never = 0,
    ECreatureRoleFrequencyModifier_Low = 1,
    ECreatureRoleFrequencyModifier_Normal = 2,
    ECreatureRoleFrequencyModifier_High = 3,
};

class cGcCreatureRoleFrequencyModifier
{
    static const unsigned __int64 muNameHash = 0x8F2EED19BC2FFF5D;
    static const unsigned __int64 muTemplateHash = 0x15D26A60973A874A;
    static const int miNumMembers = 1;

    eCreatureRoleFrequencyModifier meCreatureRoleFrequencyModifier;

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
