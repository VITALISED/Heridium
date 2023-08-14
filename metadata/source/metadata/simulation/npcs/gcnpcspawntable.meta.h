#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/gameplay/gcuniquenpcspawndata.meta.h"
#include "../../../../../metadata/source/metadata/gameplay/gcnpcplacementinfo.meta.h"

class cGcNPCSpawnTable
{
public:
    static const unsigned __int64 muNameHash = 0xEF1AB4FE11FCFA6D;
    static const unsigned __int64 muTemplateHash = 0x6CE80CDD523D33CE;
    static const int miNumMembers = 4;

    cTkFixedArray<cTkFixedString<128,char>, 8> maNPCModelNames;
    cTkFixedArray<float, 8> maNPCRaceScale;
    cTkDynamicArray<cGcUniqueNPCSpawnData> maUniqueNPCs;
    cTkDynamicArray<cGcNPCPlacementInfo> maPlacementInfos;

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
