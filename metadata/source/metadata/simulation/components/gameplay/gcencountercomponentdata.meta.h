#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/gameplay/gcencountertype.meta.h"

class cGcEncounterComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x1BAD68301EABDA5C;
    static const unsigned __int64 muTemplateHash = 0x8B81EF15449C5259;
    static const int miNumMembers = 2;

    cGcEncounterType mEncounterType;
    cTkDynamicArray<TkID<128> > maInteractMissionTable;

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
