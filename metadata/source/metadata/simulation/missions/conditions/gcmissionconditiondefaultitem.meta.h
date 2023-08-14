#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/missions/defaultmissionitems/gcdefaultmissionproductenum.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/missions/defaultmissionitems/gcdefaultmissionsubstanceenum.meta.h"

class cGcMissionConditionDefaultItem
{
public:
    static const unsigned __int64 muNameHash = 0x6F38B975D5E86126;
    static const unsigned __int64 muTemplateHash = 0x638524CFD3C9B5F8;
    static const int miNumMembers = 3;

    cGcDefaultMissionProductEnum mProductType;
    cGcDefaultMissionSubstanceEnum mSubstanceType;
    TkID<128> mID;

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
