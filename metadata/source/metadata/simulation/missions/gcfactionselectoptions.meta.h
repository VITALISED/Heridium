#pragma once

#include "../../../../../../../pch.h"
enum eFactionOption
{
    EFactionOption_DataDefined = 0,
    EFactionOption_CurrentMission = 1,
    EFactionOption_CurrentSystem = 2,
};
class cGcMissionFaction;

class cGcFactionSelectOptions
{
    static const unsigned __int64 muNameHash = 5320033577604815190;
    static const unsigned __int64 muTemplateHash = 10815657919857119647;
    static const int miNumMembers = 2;

    eFactionOption meFactionOption;
    cGcMissionFaction mFaction;

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
