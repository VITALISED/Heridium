#pragma once
#include "pch.h"

class cGcAudioWwiseEvents;
class cTkTextureResource;

class cGcRewardOSDMessage
{
public:
    static const unsigned __int64 muNameHash = 0x53D72723F082671D;
    static const unsigned __int64 muTemplateHash = 0x1D2C471ADB92C5D9;
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
