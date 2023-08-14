#pragma once
#include "../../../../../pch.h"

class cTkMeshData
{
public:
    static const unsigned __int64 muNameHash = 0xF671716161E708E3;
    static const unsigned __int64 muTemplateHash = 0xD3AC8F6F7A4D55FC;
    static const int miNumMembers = 5;

    cTkFixedString<128,char> macIdString;
    unsigned __int64 mui64Hash;
    int miVertexDataSize;
    int miIndexDataSize;
    cTkDynamicArray<unsigned __int8> maMeshDataStream;

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
