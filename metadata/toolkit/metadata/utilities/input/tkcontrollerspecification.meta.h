#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/utilities/input/tkbuttonimagelookup.meta.h"
#include "../../../../../metadata/toolkit/metadata/utilities/input/tkaxisimagelookup.meta.h"
#include "../../../../../metadata/toolkit/metadata/utilities/input/tkchordsimagelookup.meta.h"

class cTkControllerSpecification
{
public:
    static const unsigned __int64 muNameHash = 0x5DBD3B5170282610;
    static const unsigned __int64 muTemplateHash = 0x3724BA849DF5AE03;
    static const int miNumMembers = 4;

    TkID<128> mId;
    cTkButtonImageLookup mButtonImageLookup;
    cTkAxisImageLookup mAxisImageLookup;
    cTkChordsImageLookup mChordsImageLookup;

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
