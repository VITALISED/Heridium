#pragma once
#include "../../../../../../../pch.h"

class cGcPlayerEmotePropData;
class cTkTextureResource;
class cTkTextureResource;

class cGcPlayerEmote
{
    static const unsigned __int64 muNameHash = 0xBD1382185246DF07;
    static const unsigned __int64 muTemplateHash = 0xC0C272905A6A0283;
    static const int miNumMembers = 19;

    TkID<256> mTitle;
    TkID<256> mChatText;
    bool mbChatUsesPrefix;
    TkID<128> mEmoteID;
    TkID<128> mAnimationName;
    cGcPlayerEmotePropData mPropData;
    cTkTextureResource mIcon;
    TkID<128> mLinkedSpecialID;
    bool mbNeverShowInMenu;
    TkID<128> mLoopAnimUntilMove;
    bool mbCloseMenuOnSelect;
    bool mbMoveToCancel;
    TkID<128> mGekAnimationName;
    TkID<128> mGekLoopAnimUntilMove;
    bool mbAvailableUnderwater;
    TkID<128> mRidingAnimationName;
    bool mbIsPetCommand;
    TkID<256> mPetCommandTitle;
    cTkTextureResource mPetCommandIcon;

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
