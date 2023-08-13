#pragma once
#include "../../../../../../pch.h"

class cGcActionSetType;
class cGcActionUseType;

class cGcActionSet
{
    static const unsigned __int64 muNameHash = 0xA14126BE226C6660;
    static const unsigned __int64 muTemplateHash = 0xCC5C5E926EE22A2B;
    static const int miNumMembers = 6;

    cGcActionSetType mType;
    cGcActionUseType mStatus;
    cTkFixedString<32,char> macExternalId;
    cTkFixedString<32,char> macExternalLoc;
    TkID<256> mLocTag;
    cTkDynamicArray<cGcActionSetAction> maActions;

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
