#pragma once

#include "../../../../../../../../pch.h"
class cGcMissionSequenceWaitForFriendlyDroneScanEvent
{
    static const unsigned __int64 muNameHash = 15399610817261911340;
    static const unsigned __int64 muTemplateHash = 8925336375774181699;
    static const int miNumMembers = 6;

    cTkFixedString<128,char> macMessageSummoned;
    cTkFixedString<128,char> macMessageUnsummoned;
    cTkFixedString<128,char> macMessageCantSummon;
    cTkFixedString<128,char> macMessageNotAvailable;
    TkID<256> mEvent;
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
