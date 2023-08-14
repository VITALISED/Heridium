#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/utilities/data/tkinputenum.meta.h"

enum eEvent
{
    EEvent_None = 0,
    EEvent_Pirates = 1,
    EEvent_Police = 2,
    EEvent_Traders = 3,
    EEvent_Walker = 4,
};
#include "../../../../../metadata/source/metadata/simulation/scene/gcbuttonspawnoffset.meta.h"

class cGcButtonSpawn
{
public:
    static const unsigned __int64 muNameHash = 0x7F9FCEDE7E2CBFC0;
    static const unsigned __int64 muTemplateHash = 0xEB2525B3E0B9F658;
    static const int miNumMembers = 3;

    cTkInputEnum mButton;
    eEvent meEvent;
    cGcButtonSpawnOffset mOffset;

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
