#pragma once
#include "../../../../../pch.h"

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
public:
    static const unsigned __int64 muNameHash = 0x8A8A7AA901A0FC93;
    static const unsigned __int64 muTemplateHash = 0x25FB62A959721723;
    static const int miNumMembers = 1;

    eCreatureActiveTime meCreatureActiveTime;

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
