#pragma once
#include "pch.h"

enum eByteBeatEnvelope
{
    EByteBeatEnvelope_Short = 0,
    EByteBeatEnvelope_Med = 1,
    EByteBeatEnvelope_Long = 2,
};

class cGcByteBeatEnvelope
{
public:
    static const unsigned __int64 muNameHash = 0x3D8CDA50E9CD9F10;
    static const unsigned __int64 muTemplateHash = 0xD80E9187D6043871;
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
