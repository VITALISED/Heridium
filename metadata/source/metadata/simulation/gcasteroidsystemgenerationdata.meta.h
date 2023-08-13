#pragma once

#include "../../../../../../pch.h"
class cGcAsteroidGenerationData;
class cGcAsteroidGenerationData;
class cGcAsteroidGenerationData;
class cGcAsteroidGenerationData;

class cGcAsteroidSystemGenerationData
{
    static const unsigned __int64 muNameHash = 7892356452951991162;
    static const unsigned __int64 muTemplateHash = 6401971312047274249;
    static const int miNumMembers = 4;

    cGcAsteroidGenerationData mCommonAsteroidData;
    cGcAsteroidGenerationData mRingAsteroidData;
    cGcAsteroidGenerationData mLargeAsteroidData;
    cGcAsteroidGenerationData mRareAsteroidData;

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
