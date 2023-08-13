#pragma once
#include "../../../../../../../pch.h"

class cTkModelResource;

class cGcCustomisationFreighterEngineEffect
{
    static const unsigned __int64 muNameHash = 0x908C3E825994D6F;
    static const unsigned __int64 muTemplateHash = 0x64FE9813AB64808;
    static const int miNumMembers = 5;

    TkID<128> mName;
    TkID<128> mLinkedTechID;
    TkID<128> mLinkedSpecialID;
    TkID<256> mTip;
    cTkModelResource mEffectResource;

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
