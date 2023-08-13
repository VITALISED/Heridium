#pragma once
#include "pch.h"

class cGcMissionConditionTest;
class cGcStatusMessageMissionMarkup;

class cGcMissionSequenceWaitForConditions
{
public:
    static const unsigned __int64 muNameHash = 0x677779252EE27773;
    static const unsigned __int64 muTemplateHash = 0xBA4ADED1901B82DD;
    static const int miNumMembers = 8;

    cTkFixedString<128,char> macMessage;
    cGcMissionConditionTest mConditionTest;
    cTkDynamicArray<cTkClassPointer1> maConditions;
    bool mbAllowedToFormatObjectives;
    bool mbForceAllowMissionRestart;
    TkID<256> mForceAllowMissionRestartEvent;
    cTkFixedString<128,char> macDebugText;
    cGcStatusMessageMissionMarkup mStatusMessageMissionMarkup;

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
