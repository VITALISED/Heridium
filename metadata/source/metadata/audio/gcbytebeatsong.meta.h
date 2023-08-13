#pragma once
#include "../../../../../../pch.h"

class cGcByteBeatSong
{
    static const unsigned __int64 muNameHash = 0xDC95ACD037A3B77;
    static const unsigned __int64 muTemplateHash = 0x7A1695EC46335BC8;
    static const int miNumMembers = 8;

    TkID<128> mId;
    TkID<128> mRequiredSpecialId;
    cTkFixedString<32,char> macName;
    TkID<256> mLocID;
    cTkFixedString<64,char> macAuthorOnlineID;
    cTkFixedString<64,char> macAuthorUsername;
    cTkFixedString<64,char> macAuthorPlatform;
    cTkFixedArray<cTkFixedString<64,char> > maData;

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
