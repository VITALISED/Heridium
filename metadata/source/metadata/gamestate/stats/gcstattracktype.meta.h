#pragma once
#include "../../../../../pch.h"

enum eStatTrackType
{
    EStatTrackType_Set = 0,
    EStatTrackType_Add = 1,
    EStatTrackType_Max = 2,
    EStatTrackType_Min = 3,
};

class cGcStatTrackType
{
public:
    static const unsigned __int64 muNameHash = 0xCCBEF4F753544A3F;
    static const unsigned __int64 muTemplateHash = 0xF3CE45267031CFFA;
    static const int miNumMembers = 1;

    eStatTrackType meStatTrackType;

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
