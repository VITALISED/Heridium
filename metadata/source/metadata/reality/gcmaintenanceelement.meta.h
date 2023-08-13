#pragma once
#include "../../../../../../pch.h"

class cGcMaintenanceElementGroups;
class cGcInventoryType;

enum eUpdateType
{
    EUpdateType_UpdatesAlways = 0,
    EUpdateType_UpdateOnlyWhenComplete = 1,
    EUpdateType_UpdateOnlyWhenNotComplete = 2,
};

enum eDamageStatus
{
    EDamageStatus_Damaged = 0,
    EDamageStatus_Repaired = 1,
    EDamageStatus_Random = 2,
};

enum eCompletionRequirement
{
    ECompletionRequirement_FullyChargedAndRepaired = 0,
    ECompletionRequirement_AnyChargeAndRepaired = 1,
    ECompletionRequirement_FullyRepaired = 2,
    ECompletionRequirement_NotFullyCharged = 3,
    ECompletionRequirement_EmptySlot = 4,
    ECompletionRequirement_NoRequirement = 5,
    ECompletionRequirement_UserInstalls = 6,
    ECompletionRequirement_HasIngredients = 7,
};

class cGcMaintenanceElement
{
    static const unsigned __int64 muNameHash = 0x79BDBA7746F3C796;
    static const unsigned __int64 muTemplateHash = 0xC7878A2059B371AB;
    static const int miNumMembers = 12;

    cGcMaintenanceElementGroups mItemGroupOverride;
    cGcInventoryType mType;
    TkID<128> mId;
    float mfMinRandAmount;
    float mfMaxRandAmount;
    int miMaxCapacity;
    float mfAmountEmptyTimePeriod;
    eUpdateType meUpdateType;
    int miDamagedAfterTimePeriodMin;
    int miDamagedAfterTimePeriodMax;
    eDamageStatus meDamageStatus;
    eCompletionRequirement meCompletionRequirement;

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
