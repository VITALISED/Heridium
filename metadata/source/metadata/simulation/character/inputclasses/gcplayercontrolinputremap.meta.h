#pragma once

#include "../../../../../../../../pch.h"
class cGcCharacterControlInputValidity;
class cGcInputActions;
class cGcInputActions;

enum eInputRemapMode
{
    EInputRemapMode_ReplaceOriginalBinding = 0,
    EInputRemapMode_AdditionalBinding = 1,
};

class cGcPlayerControlInputRemap
{
    static const unsigned __int64 muNameHash = 10409316092457167425;
    static const unsigned __int64 muTemplateHash = 14716629488149950681;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
