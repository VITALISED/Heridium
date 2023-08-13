#pragma once

#include "../../../../../../pch.h"
enum eByteBeatEnvelope
{
    EByteBeatEnvelope_Short = 0,
    EByteBeatEnvelope_Med = 1,
    EByteBeatEnvelope_Long = 2,
};

class cGcByteBeatEnvelope
{
    static const unsigned __int64 muNameHash = 4435159774107901712;
    static const unsigned __int64 muTemplateHash = 15568540974463596657;
    static const int miNumMembers = 1;

    eByteBeatEnvelope meByteBeatEnvelope;

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
