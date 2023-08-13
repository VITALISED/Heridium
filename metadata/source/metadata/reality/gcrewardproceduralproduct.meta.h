#pragma once
#include "../../../../../../pch.h"

class cGcProceduralProductCategory;
class cGcRarity;

class cGcRewardProceduralProduct
{
    static const unsigned __int64 muNameHash = 0x28EDE156F726CF4C;
    static const unsigned __int64 muTemplateHash = 0xB83297F73B33E488;
    static const int miNumMembers = 5;

    cGcProceduralProductCategory mType;
    TkID<256> mOSDMessage;
    bool mbSubIfPlayerAlreadyHasOne;
    bool mbOverrideRarity;
    cGcRarity mRarity;

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
