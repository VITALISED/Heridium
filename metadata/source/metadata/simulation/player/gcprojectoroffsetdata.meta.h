#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/ui/hud/gcinworlduiscreendata.meta.h"

class cGcProjectorOffsetData
{
public:
    static const unsigned __int64 muNameHash = 0xB9DD91F357A56979;
    static const unsigned __int64 muTemplateHash = 0x9E692218EF2AC71A;
    static const int miNumMembers = 4;

    float mfScale;
    cTkVector2 mScreenScale;
    cGcInWorldUIScreenData mActive;
    cGcInWorldUIScreenData mInactive;

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
