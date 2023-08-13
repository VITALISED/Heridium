#pragma once
#include "pch.h"

class cGcUniverseAddressData;
class cGcGameMode;

class cGcAtlasBaseQuery
{
public:
    static const unsigned __int64 muNameHash = 0xC263B56059CD6513;
    static const unsigned __int64 muTemplateHash = 0xF3CB570D765D079;
    static const int miNumMembers = 4;

    cGcUniverseAddressData mUniverseAddress;
    cGcGameMode mGameMode;
    cTkFixedString<32,char> macUserId;
    cTkVector3 mPosition;

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
