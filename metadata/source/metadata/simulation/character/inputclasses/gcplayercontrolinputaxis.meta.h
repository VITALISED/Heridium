#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/character/gccharactercontrolinputvalidity.meta.h"
#include "../../../../../../metadata/toolkit/metadata/utilities/input/actions/gcinputactions.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/character/gccharactercontroloutputspace.meta.h"

class cGcPlayerControlInputAxis
{
public:
    static const unsigned __int64 muNameHash = 0x52A4BE1415A68ECA;
    static const unsigned __int64 muTemplateHash = 0x2AAD780E27891B90;
    static const int miNumMembers = 6;

    cGcCharacterControlInputValidity mValidity;
    cGcInputActions mInputX;
    cGcInputActions mInputY;
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
