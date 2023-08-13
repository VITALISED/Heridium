#pragma once

#include "../../../../../../../../pch.h"
class cGcDate;
class cGcDate;

class cGcMissionSchedulingData
{
    static const unsigned __int64 muNameHash = 14398537151688066738;
    static const unsigned __int64 muTemplateHash = 2931483705563776531;
    static const int miNumMembers = 7;

    cTkClassPointer mRecurrenceType;
    cGcDate mStartDate;
    cGcDate mEndDate;
    bool mbIndependentStart;
    bool mbHasEndDate;
    unsigned __int64 mui64EarlyEndOffset;
    cTkDynamicArray<TkID<128> > maMissionIDs;

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
