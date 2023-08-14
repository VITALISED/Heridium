#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/gamestate/basebuilding/gcbasegridsearchfilter.meta.h"

class cGcBasePartSearchFilter
{
public:
    static const unsigned __int64 muNameHash = 0x471C446618668C68;
    static const unsigned __int64 muTemplateHash = 0xE31DCBB6E6BAA484;
    static const int miNumMembers = 7;

    TkID<128> mIsSpecificID;
    bool mbPartIsOnline;
    bool mbPartIsNotOnline;
    bool mbPartIsVision;
    bool mbPartIsNotVision;
    bool mbApplyGridFilter;
    cGcBaseGridSearchFilter mBaseGridFilter;

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
