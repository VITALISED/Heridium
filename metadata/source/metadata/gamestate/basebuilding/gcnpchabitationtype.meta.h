#pragma once
#include "../../../../../../../pch.h"

enum eNPCHabitationType
{
    ENPCHabitationType_WeaponsExpert = 0,
    ENPCHabitationType_Farmer = 1,
    ENPCHabitationType_Builder = 2,
    ENPCHabitationType_Vehicles = 3,
    ENPCHabitationType_Scientist = 4,
};

class cGcNPCHabitationType
{
    static const unsigned __int64 muNameHash = 0x2A6BB71EAF092577;
    static const unsigned __int64 muTemplateHash = 0xFDB46411B06AA1C;
    static const int miNumMembers = 1;

    eNPCHabitationType meNPCHabitationType;

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
