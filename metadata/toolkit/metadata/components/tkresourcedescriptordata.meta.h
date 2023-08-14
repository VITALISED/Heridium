#pragma once
#include "../../../../pch.h"

class cTkResourceDescriptorData
{
public:
    static const unsigned __int64 muNameHash = 0xC24CCFE195015403;
    static const unsigned __int64 muTemplateHash = 0x4F8F0561C7986C88;
    static const int miNumMembers = 5;

    TkID<256> mId;
    cTkFixedString<128,char> macName;
    cTkDynamicArray<cTkFixedString<128,char> > maReferencePaths;
    float mfChance;
    cTkDynamicArray<cTkClassPointer> maChildren;

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
