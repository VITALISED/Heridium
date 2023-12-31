#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/ecosystem/gccreaturerolefilenamelist.meta.h"

class cGcCreatureRoleFilenameTable
{
public:
    static const unsigned __int64 muNameHash = 0x15A053481CA45D03;
    static const unsigned __int64 muTemplateHash = 0x7B0FAF5D4550E94B;
    static const int miNumMembers = 9;

    cTkFixedArray<cGcCreatureRoleFilenameList, 16> maBiomeFiles;
    cGcCreatureRoleFilenameList mUnderwaterFiles;
    cGcCreatureRoleFilenameList mUnderwaterFilesExtra;
    cGcCreatureRoleFilenameList mCaveFiles;
    cGcCreatureRoleFilenameList mAirFiles;
    cGcCreatureRoleFilenameList mRobotFiles;
    cTkFixedArray<cGcCreatureRoleFilenameList, 27> maWeirdBiomeFiles;
    cTkFixedArray<float, 4> maLifeChance;
    cTkFixedArray<float, 4> maRoleFrequencyModifiers;

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
