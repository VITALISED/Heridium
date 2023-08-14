#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/player/gcplayercommunicatormessage.meta.h"

class cGcMissionSequenceCommunicator
{
public:
    static const unsigned __int64 muNameHash = 0xD14F8D38E31CAB20;
    static const unsigned __int64 muTemplateHash = 0xDD46519927037100;
    static const int miNumMembers = 6;

    cTkFixedString<128,char> macMessage;
    cTkFixedString<128,char> macVRMessage;
    cTkFixedString<128,char> macOSDMessage;
    cGcPlayerCommunicatorMessage mComms;
    bool mbAutoOpen;
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
