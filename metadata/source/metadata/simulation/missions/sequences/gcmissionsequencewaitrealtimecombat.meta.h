#pragma once

#include "../../../../../../../../pch.h"
class cGcMissionSequenceWaitRealTimeCombat
{
    static const unsigned __int64 muNameHash = 13013054565931939780;
    static const unsigned __int64 muTemplateHash = 2980270737098330065;
    static const int miNumMembers = 7;

    cTkFixedString<128,char> macMessage;
    cTkFixedString<128,char> macMessageCombat;
    unsigned __int64 mui64Time;
    float mfRandomness;
    TkID<128> mDisplayStat;
    bool mbStatFromNow;
    cTkFixedString<128,char> macDebugText;

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
