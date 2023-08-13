#pragma once
#include "pch.h"

class cTkMeshMetaData
{
public:
    static const unsigned __int64 muNameHash = 0x4CF5A27A1458612D;
    static const unsigned __int64 muTemplateHash = 0xCD95EDB97D142FC;
    static const int miNumMembers = 7;

    cTkFixedString<128,char> macIdString;
    unsigned __int64 mui64Hash;
    int miVertexDataSize;
    int miVertexDataOffset;
    int miIndexDataSize;
    int miIndexDataOffset;
    bool mbDoubleBufferGeometry;

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
