#pragma once
#include "../../../../../../../pch.h"

class cGcPersistentBBObjectData
{
    static const unsigned __int64 muNameHash = 0xCD3485C140AE7B57;
    static const unsigned __int64 muTemplateHash = 0xFAD41A8138D2B51E;
    static const int miNumMembers = 8;

    unsigned __int64 mui64Timestamp;
    TkID<128> mObjectID;
    unsigned __int64 mui64GalacticAddress;
    unsigned __int64 mui64RegionSeed;
    unsigned __int64 mui64UserData;
    cTkVector mPosition;
    cTkVector mUp;
    cTkVector mAt;

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
