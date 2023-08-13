#pragma once
#include "pch.h"

class cGcUniverseAddressData;

class cGcAtlasMonument
{
public:
    static const unsigned __int64 muNameHash = 0xBD4D110E1D076CE;
    static const unsigned __int64 muTemplateHash = 0xA60747DE40AB1CA5;
    static const int miNumMembers = 9;

    cGcUniverseAddressData mUniverseAddress;
    cTkVector3 mPosition;
    cTkVector3 mAt;
    cTkFixedString<64,char> macRID;
    cTkFixedString<64,char> macCreatorName;
    cTkFixedString<64,char> macCreatorOnlineID;
    cTkFixedString<64,char> macCocreatorName;
    cTkFixedString<64,char> macCocreatorOnlineID;
    unsigned __int64 mui64Timestamp;

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
