#pragma once
#include "pch.h"

enum eMilestone
{
    EMilestone_Bronze = 0,
    EMilestone_Silver = 1,
    EMilestone_Gold = 2,
};

class cGcMissionSequenceWaitForStatMilestone
{
public:
    static const unsigned __int64 muNameHash = 0xCD771E985A27F526;
    static const unsigned __int64 muTemplateHash = 0xC0D46638AF53103D;
    static const int miNumMembers = 5;

    cTkFixedString<128,char> macMessage;
    TkID<128> mStat;
    eMilestone meMilestone;
    bool mbEveryMilestone;
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
