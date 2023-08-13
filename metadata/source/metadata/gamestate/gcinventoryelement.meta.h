#pragma once
#include "pch.h"

class cGcInventoryType;
class cGcInventoryIndex;

class cGcInventoryElement
{
public:
    static const unsigned __int64 muNameHash = 0xF6B3A96F7D4F7967;
    static const unsigned __int64 muTemplateHash = 0x1E74CFC329DC906E;
    static const int miNumMembers = 7;

    cGcInventoryType mType;
    TkID<128> mId;
    int miAmount;
    int miMaxAmount;
    float mfDamageFactor;
    bool mbFullyInstalled;
    cGcInventoryIndex mIndex;

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
