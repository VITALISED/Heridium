#pragma once
#include "../../../../../../pch.h"

enum eAtlasPathProgressType
{
    EAtlasPathProgressType_IncrementPathProgress = 0,
    EAtlasPathProgressType_FinalStoryAtlas = 1,
};

class cGcRewardAtlasPathProgress
{
    static const unsigned __int64 muNameHash = 0x2FFD5C572426F075;
    static const unsigned __int64 muTemplateHash = 0x29D761D8EFF76D18;
    static const int miNumMembers = 1;

    eAtlasPathProgressType meAtlasPathProgressType;

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
