#pragma once

#include "../../../../../../../../pch.h"
class cGcBaseSearchFilter;

class cGcMissionConditionBaseQuery
{
    static const unsigned __int64 muNameHash = 15767999347487289128;
    static const unsigned __int64 muTemplateHash = 11469422306096276179;
    static const int miNumMembers = 5;

    cGcBaseSearchFilter mBaseSearchFilter;
    int miMinBasesFound;
    int miMaxBasesFound;
    float mfSearchDistanceLimit;
    bool mbTakeSpecificPartIdFromSeasonData;

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
