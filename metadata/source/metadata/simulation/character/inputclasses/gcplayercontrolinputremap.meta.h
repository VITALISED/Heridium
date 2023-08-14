#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/character/gccharactercontrolinputvalidity.meta.h"
#include "../../../../../../metadata/toolkit/metadata/utilities/input/actions/gcinputactions.meta.h"

enum eInputRemapMode
{
    EInputRemapMode_ReplaceOriginalBinding = 0,
    EInputRemapMode_AdditionalBinding = 1,
};

class cGcPlayerControlInputRemap
{
public:
    static const unsigned __int64 muNameHash = 0x907551D5CDAAAA41;
    static const unsigned __int64 muTemplateHash = 0xCC3BF88C243770D9;
    static const int miNumMembers = 4;

    cGcCharacterControlInputValidity mValidity;
    cGcInputActions mAction;
    cGcInputActions mCanBeTriggeredBy;
    eInputRemapMode meInputRemapMode;

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
