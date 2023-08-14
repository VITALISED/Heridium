#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/gamestate/gcseasonalmilestone.meta.h"
#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"

class cGcSeasonalStage
{
public:
    static const unsigned __int64 muNameHash = 0xF1949393FDAF963A;
    static const unsigned __int64 muTemplateHash = 0x9222F3D64367B8B5;
    static const int miNumMembers = 4;

    cTkDynamicArray<cGcSeasonalMilestone> maMilestones;
    cTkTextureResource mIcon;
    TkID<256> mTitle;
    TkID<256> mDescription;

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
