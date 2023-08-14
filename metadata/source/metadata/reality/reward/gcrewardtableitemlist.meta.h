#pragma once
#include "../../../../../pch.h"

enum eRewardChoice
{
    ERewardChoice_GiveAll = 0,
    ERewardChoice_Select = 1,
    ERewardChoice_SelectAlways = 2,
    ERewardChoice_TryEach = 3,
    ERewardChoice_SelectSilent = 4,
    ERewardChoice_GiveAllSilent = 5,
    ERewardChoice_TryFirst_ThenSelectAlways = 6,
    ERewardChoice_SelectFromSuccess = 7,
    ERewardChoice_SelectAlwaysSilent = 8,
    ERewardChoice_SelectFromSuccessSilent = 9,
};
#include "../../../../../metadata/source/metadata/reality/gcrewardtableitem.meta.h"

class cGcRewardTableItemList
{
public:
    static const unsigned __int64 muNameHash = 0xF97DB1C704357E47;
    static const unsigned __int64 muTemplateHash = 0xECD3D5DCA792D16;
    static const int miNumMembers = 4;

    eRewardChoice meRewardChoice;
    bool mbOverrideZeroSeed;
    bool mbUseInventoryChoiceOverride;
    cTkDynamicArray<cGcRewardTableItem> maList;

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
