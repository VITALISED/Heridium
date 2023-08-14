#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/cloth/gcclothpiece.meta.h"

class cGcClothComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x89A5D7902BDAFE9B;
    static const unsigned __int64 muTemplateHash = 0xBC8BF2EA3F3EEA7F;
    static const int miNumMembers = 6;

    bool mbEnabled;
    int miNumConstraintSolvingIterations;
    cTkDynamicArray<cGcClothPiece> maClothPieces;
    float mfClothScale;
    float mfCollisionScale;
    float mfAttachmentScale;

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
