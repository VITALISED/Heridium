#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/environment/gcbuildingfilenamelist.meta.h"
#include "../../../../../metadata/source/metadata/simulation/environment/gcbuildingdefinitiondata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/environment/gcbuildingclusterlayout.meta.h"

class cGcBuildingDefinitionTable
{
public:
    static const unsigned __int64 muNameHash = 0x9808AB95D152F880;
    static const unsigned __int64 muTemplateHash = 0x8CDE09C9AD3FE42E;
    static const int miNumMembers = 3;

    cTkFixedArray<cGcBuildingFilenameList, 8> maBuildingFiles;
    cTkFixedArray<cGcBuildingDefinitionData, 52> maBuildingPlacement;
    cTkDynamicArray<cGcBuildingClusterLayout> maClusterLayouts;

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
