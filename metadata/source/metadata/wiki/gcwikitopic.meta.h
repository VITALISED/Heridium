#pragma once

#include "../../../../../../pch.h"
class cTkTextureResource;
class cTkTextureResource;
class cGcActionSetType;

class cGcWikiTopic
{
    static const unsigned __int64 muNameHash = 6184962718730015169;
    static const unsigned __int64 muTemplateHash = 5006324106315965440;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
