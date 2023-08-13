#pragma once

#include "../../../../../../pch.h"
enum eGcStatEnum
{
    EGcStatEnum_None = 0,
    EGcStatEnum_DEPOTS_BROKEN = 1,
    EGcStatEnum_FPODS_BROKEN = 2,
    EGcStatEnum_PLANTS_PLANTED = 3,
    EGcStatEnum_SALVAGE_LOOTED = 4,
    EGcStatEnum_TREASURE_FOUND = 5,
    EGcStatEnum_QUADS_KILLED = 6,
    EGcStatEnum_WALKERS_KILLED = 7,
    EGcStatEnum_FLORA_KILLED = 8,
    EGcStatEnum_PLANTS_GATHERED = 9,
    EGcStatEnum_BONES_FOUND = 10,
    EGcStatEnum_C_SENT_KILLS = 11,
    EGcStatEnum_STORM_CRYSTALS = 12,
    EGcStatEnum_BURIED_PROPS = 13,
    EGcStatEnum_MINIWORM_KILL = 14,
    EGcStatEnum_POOP_COLLECTED = 15,
    EGcStatEnum_GRAVBALLS = 16,
    EGcStatEnum_EGG_PODS = 17,
};

class cGcStatsEnum
{
    static const unsigned __int64 muNameHash = 12456515173934351074;
    static const unsigned __int64 muTemplateHash = 746571622737470437;
    static const int miNumMembers = 1;

    eGcStatEnum meGcStatEnum;

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
