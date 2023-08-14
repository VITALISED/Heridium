#pragma once
#include "../../../../../pch.h"

class cGcPersistentBaseEntry
{
public:
    static const unsigned __int64 muNameHash = 0xD040D4124F0456EF;
    static const unsigned __int64 muTemplateHash = 0xDB39E3870A3CBC82;
    static const int miNumMembers = 7;

    unsigned __int64 mui64Timestamp;
    TkID<128> mObjectID;
    unsigned __int64 mui64UserData;
    cTkVector3 mPosition;
    cTkVector3 mUp;
    cTkVector3 mAt;
    cTkFixedString<64,char> macMessage;

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
