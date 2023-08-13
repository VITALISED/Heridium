#pragma once

#include "../../../../../../../../pch.h"
class cGcMissionSequenceFreighterEngage
{
    static const unsigned __int64 muNameHash = 6293007965881391990;
    static const unsigned __int64 muTemplateHash = 6393574917671470379;
    static const int miNumMembers = 8;

    cTkFixedString<128,char> macMessageGetToSpace;
    cTkFixedString<128,char> macMessageEngage;
    float mfEngageDistance;
    float mfEngageTime;
    float mfTimeAfterWarp;
    TkID<128> mTimeoutMessage;
    cTkFixedString<128,char> macTimeoutOSDMessage;
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
