#pragma once

#include "../../../../../../../../pch.h"
class cGcCharacterControlInputValidity;

enum eInputMouseMode
{
    EInputMouseMode_ScreenCentrePos = 0,
};
class cGcCharacterControlOutputSpace;

class cGcPlayerControlInputMouse
{
    static const unsigned __int64 muNameHash = 10144235105171507614;
    static const unsigned __int64 muTemplateHash = 7497949752670552387;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
