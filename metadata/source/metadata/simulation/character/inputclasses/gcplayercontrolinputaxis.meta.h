#pragma once

#include "../../../../../../../../pch.h"
class cGcCharacterControlInputValidity;
class cGcInputActions;
class cGcInputActions;
class cGcCharacterControlOutputSpace;

class cGcPlayerControlInputAxis
{
    static const unsigned __int64 muNameHash = 5955093600762498762;
    static const unsigned __int64 muTemplateHash = 3075246122752088976;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
