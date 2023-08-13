#pragma once
#include "../../../../../../../pch.h"

enum eCharacterControlInputValidity
{
    ECharacterControlInputValidity_Always = 0,
    ECharacterControlInputValidity_PadOnly = 1,
    ECharacterControlInputValidity_KeyboardAnMouseOnly = 2,
};

class cGcCharacterControlInputValidity
{
    static const unsigned __int64 muNameHash = 0x1A9351C5A8C07BA4;
    static const unsigned __int64 muTemplateHash = 0x28FD8E5FE5649E4B;
    static const int miNumMembers = 1;

    eCharacterControlInputValidity meCharacterControlInputValidity;

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
