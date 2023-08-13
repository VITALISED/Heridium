#pragma once

#include "../../../../../../../pch.h"
enum eCreatureActiveTime
{
    ECreatureActiveTime_OnlyDay = 0,
    ECreatureActiveTime_MostlyDay = 1,
    ECreatureActiveTime_AnyTime = 2,
    ECreatureActiveTime_MostlyNight = 3,
    ECreatureActiveTime_OnlyNight = 4,
};

class cGcCreatureActiveTime
{
    static const unsigned __int64 muNameHash = 9982926390315515027;
    static const unsigned __int64 muTemplateHash = 2736889678047352611;
    static const int miNumMembers = 1;

    eCreatureActiveTime meCreatureActiveTime;

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
