#pragma once
#include "../../../../../pch.h"

enum eKeyPress
{
    EKeyPress_1 = 0,
    EKeyPress_2 = 1,
    EKeyPress_3 = 2,
    EKeyPress_4 = 3,
    EKeyPress_5 = 4,
    EKeyPress_6 = 5,
    EKeyPress_7 = 6,
    EKeyPress_8 = 7,
    EKeyPress_9 = 8,
    EKeyPress_PadUp = 9,
    EKeyPress_PadDown = 10,
    EKeyPress_PadLeft = 11,
    EKeyPress_PadRight = 12,
};
#include "../../../../../metadata/source/metadata/player/experience/gcexperiencedebugtriggeraction.meta.h"

class cGcExperienceDebugTriggerInput
{
public:
    static const unsigned __int64 muNameHash = 0xBCDA670B36E2534;
    static const unsigned __int64 muTemplateHash = 0xC72994D29824460B;
    static const int miNumMembers = 2;

    eKeyPress meKeyPress;
    cTkDynamicArray<cGcExperienceDebugTriggerAction> maActions;

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
