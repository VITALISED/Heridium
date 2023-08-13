#pragma once

#include "../../../../../../../pch.h"
class cGcPlayfabMatchmakingAttributes
{
    static const unsigned __int64 muNameHash = 5279765841817034470;
    static const unsigned __int64 muTemplateHash = 8986724569809248315;
    static const int miNumMembers = 9;

    cTkFixedString<64,char> macUA;
    cTkFixedString<128,char> macmatchmakingVersion;
    int miisBackfilling;
    int mineedsSmallLobby;
    int migameProgress;
    cTkFixedString<128,char> macplatform;
    cTkFixedString<128,char> macgamemode;
    cTkFixedString<256,char> maclobbyConnectionString;
    cTkFixedString<64,char> macseasonNumber;

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