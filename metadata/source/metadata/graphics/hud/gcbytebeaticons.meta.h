#pragma once
#include "pch.h"

class cTkTextureResource;
class cTkTextureResource;
class cTkTextureResource;
class cTkTextureResource;

class cGcByteBeatIcons
{
public:
    static const unsigned __int64 muNameHash = 0xB0AEFBA1BDCC6569;
    static const unsigned __int64 muTemplateHash = 0x15AE941666ED5A7C;
    static const int miNumMembers = 5;

    cTkFixedArray<cTkTextureResource, 18> maIcons;
    cTkTextureResource mSawTooth;
    cTkTextureResource mSine;
    cTkTextureResource mSquare;
    cTkTextureResource mTriangle;

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
