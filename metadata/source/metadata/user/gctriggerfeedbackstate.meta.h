#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/utilities/input/actions/gcinputactions.meta.h"
#include "../../../../metadata/toolkit/metadata/utilities/input/tktriggerfeedbackdata.meta.h"

class cGcTriggerFeedbackState
{
public:
    static const unsigned __int64 muNameHash = 0x6310315CF52D5A45;
    static const unsigned __int64 muTemplateHash = 0x776D4FC8EF2794A4;
    static const int miNumMembers = 3;

    TkID<128> mId;
    cGcInputActions mAction;
    cTkTriggerFeedbackData mData;

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
