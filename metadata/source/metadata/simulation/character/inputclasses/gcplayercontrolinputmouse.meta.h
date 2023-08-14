#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/character/gccharactercontrolinputvalidity.meta.h"

enum eInputMouseMode
{
    EInputMouseMode_ScreenCentrePos = 0,
};
#include "../../../../../../metadata/source/metadata/simulation/character/gccharactercontroloutputspace.meta.h"

class cGcPlayerControlInputMouse
{
public:
    static const unsigned __int64 muNameHash = 0x8CC79014E9CB899E;
    static const unsigned __int64 muTemplateHash = 0x680E1192FFA80143;
    static const int miNumMembers = 5;

    cGcCharacterControlInputValidity mValidity;
    eInputMouseMode meInputMouseMode;
    cGcCharacterControlOutputSpace mOutputSpace;
    TkID<128> mOutput;
    TkID<128> mOutputLength;

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
