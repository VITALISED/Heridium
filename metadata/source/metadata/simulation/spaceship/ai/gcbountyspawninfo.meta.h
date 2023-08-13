#pragma once

#include "../../../../../../../../pch.h"
class cGcAIShipSpawnData;
class cTkTextureResource;

class cGcBountySpawnInfo
{
    static const unsigned __int64 muNameHash = 4163477746040074364;
    static const unsigned __int64 muTemplateHash = 8752632026589709282;
    static const int miNumMembers = 5;

    TkID<128> mId;
    cGcAIShipSpawnData mData;
    TkID<128> mAttackData;
    cTkTextureResource mIcon;
    TkID<256> mLabel;

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
