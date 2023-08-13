#pragma once

#include "../../../../../../../pch.h"
class cTkButtonImageLookup;
class cTkAxisImageLookup;
class cTkChordsImageLookup;

class cTkControllerSpecification
{
    static const unsigned __int64 muNameHash = 6754620237085681168;
    static const unsigned __int64 muTemplateHash = 3973505849996193283;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
