#pragma once
#include "../../../../../../pch.h"

class cGcMissionSequenceWaitRealTimeCombat
{
public:
    static const unsigned __int64 muNameHash = 0xB497A82E7D25F7C4;
    static const unsigned __int64 muTemplateHash = 0x295C0C71FB3CCFD1;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
