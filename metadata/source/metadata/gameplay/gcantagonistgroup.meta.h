#pragma once

#include "../../../../../../pch.h"
enum eAntagonistGroup
{
    EAntagonistGroup_Player = 0,
    EAntagonistGroup_Fiends = 1,
    EAntagonistGroup_Creatures = 2,
    EAntagonistGroup_Sentinels = 3,
    EAntagonistGroup_Turrets = 4,
    EAntagonistGroup_Walls = 5,
};

class cGcAntagonistGroup
{
    static const unsigned __int64 muNameHash = 4157956099355930479;
    static const unsigned __int64 muTemplateHash = 4079640586102686224;
    static const int miNumMembers = 1;

    eAntagonistGroup meAntagonistGroup;

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