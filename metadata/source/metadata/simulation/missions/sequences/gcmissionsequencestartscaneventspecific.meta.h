#pragma once

#include "../../../../../../../../pch.h"
class cGcPlayerMissionParticipant;

class cGcMissionSequenceStartScanEventSpecific
{
    static const unsigned __int64 muNameHash = 9497216547060094297;
    static const unsigned __int64 muTemplateHash = 13998270015308335392;
    static const int miNumMembers = 6;

    bool mbIMeantThisAndKnowWhatItDoes;
    cGcPlayerMissionParticipant mParticipant;
    TkID<256> mEvent;
    float mfTime;
    bool mbAllowOtherPlayersBase;
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
