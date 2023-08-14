#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/toolkit/metadata/tktextureresource.meta.h"
#include "../../../../metadata/source/metadata/wiki/gcwikipage.meta.h"
#include "../../../../metadata/source/metadata/input/gcactionsettype.meta.h"

class cGcWikiTopic
{
public:
    static const unsigned __int64 muNameHash = 0x55D566D2C6EFD1C1;
    static const unsigned __int64 muTemplateHash = 0x457A094003702400;
    static const int miNumMembers = 10;

    TkID<256> mTopicID;
    TkID<256> mShortDescriptionID;
    cTkTextureResource mIcon;
    cTkTextureResource mNotifyIcon;
    cTkDynamicArray<cGcWikiPage> maPages;
    TkID<128> mMission;
    TkID<256> mMissionButtonText;
    bool mbSeen;
    bool mbUnlocked;
    cGcActionSetType mActionSet;

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
