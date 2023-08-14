#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcinventorylayoutsizetype.meta.h"

class cGcInventoryTableEntry
{
public:
    static const unsigned __int64 muNameHash = 0xBA68F4D576FCF49E;
    static const unsigned __int64 muTemplateHash = 0x65D93A0D6A50384A;
    static const int miNumMembers = 4;

    TkID<128> mId;
    int miMinSize;
    int miMaxSize;
    cGcInventoryLayoutSizeType mLayoutSizeType;

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
