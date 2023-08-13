#pragma once
#include "../../../../../../../pch.h"

enum eRequireMode
{
    ERequireMode_Seated = 0,
    ERequireMode_Standing = 1,
    ERequireMode_None = 2,
};

class cGcNPCInteractiveObjectStateTransition
{
    static const unsigned __int64 muNameHash = 0x5CE318610D9BD8D9;
    static const unsigned __int64 muTemplateHash = 0x6C36D5CDE1F2A7AA;
    static const int miNumMembers = 6;

    TkID<128> mNewState;
    float mfProbability;
    TkID<128> mRequireEvent;
    TkID<128> mRequireLocator;
    eRequireMode meRequireMode;
    cTkDynamicArray<TkID<128> > maExcludeTags;

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
