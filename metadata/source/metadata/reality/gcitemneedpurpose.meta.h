#pragma once

#include "../../../../../../pch.h"
enum eItemPurpose
{
    EItemPurpose_None = 0,
    EItemPurpose_Crafting = 1,
    EItemPurpose_Building = 2,
    EItemPurpose_Repairing = 3,
    EItemPurpose_Charging = 4,
    EItemPurpose_Paying = 5,
};

class cGcItemNeedPurpose
{
    static const unsigned __int64 muNameHash = 16588781689050475345;
    static const unsigned __int64 muTemplateHash = 15318071688662985116;
    static const int miNumMembers = 1;

    eItemPurpose meItemPurpose;

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
