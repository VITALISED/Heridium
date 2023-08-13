#pragma once
#include "../../../../../../../../pch.h"

class cGcPlayerCharacterComponentData
{
    static const unsigned __int64 muNameHash = 0xE8C3B2237C130170;
    static const unsigned __int64 muTemplateHash = 0x60495EA305E0B504;
    static const int miNumMembers = 3;

    cTkDynamicArray<cGcCharacterJetpackEffect> maJetpackEffects;
    TkID<128> mIntialPlayerControlMode;
    cTkDynamicArray<cGcPlayerControlModeEntry> maPlayerControlModes;

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
