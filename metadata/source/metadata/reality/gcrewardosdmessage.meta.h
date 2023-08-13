#pragma once

#include "../../../../../../pch.h"
class cGcAudioWwiseEvents;
class cTkTextureResource;

class cGcRewardOSDMessage
{
    static const unsigned __int64 muNameHash = 6041340460453226269;
    static const unsigned __int64 muTemplateHash = 2102133306753730009;
    static const int miNumMembers = 6;

    float mfTime;
    TkID<256> mMessage;
    cGcAudioWwiseEvents mAudioEvent;
    cTkTextureResource mIcon;
    cTkColour mMessageColour;
    bool mbUseTimedMessage;

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
