#pragma once
#include "pch.h"

enum eOffsetType
{
    EOffsetType_Zero = 0,
    EOffsetType_Base = 1,
    EOffsetType_All = 2,
    EOffsetType_SeaLevel = 3,
};

class cTkNoiseOffsetEnum
{
public:
    static const unsigned __int64 muNameHash = 0xFCAC758E3056BFEF;
    static const unsigned __int64 muTemplateHash = 0xFC67D2D7540961D5;
    static const int miNumMembers = 1;

    eOffsetType meOffsetType;

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
