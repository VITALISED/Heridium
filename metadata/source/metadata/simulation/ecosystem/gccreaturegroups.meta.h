#pragma once

#include "../../../../../../../pch.h"
enum eCreatureGroup
{
    ECreatureGroup_Solo = 0,
    ECreatureGroup_Couple = 1,
    ECreatureGroup_Group = 2,
    ECreatureGroup_Herd = 3,
};

class cGcCreatureGroups
{
    static const unsigned __int64 muNameHash = 15882724778113592109;
    static const unsigned __int64 muTemplateHash = 12006438773309304558;
    static const int miNumMembers = 1;

    eCreatureGroup meCreatureGroup;

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
