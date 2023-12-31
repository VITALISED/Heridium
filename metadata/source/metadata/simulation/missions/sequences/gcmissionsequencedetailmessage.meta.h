#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/missions/sequences/gcmissionsequencedetailmessagepoint.meta.h"

class cGcMissionSequenceDetailMessage
{
public:
    static const unsigned __int64 muNameHash = 0xA29EE4D703004484;
    static const unsigned __int64 muTemplateHash = 0x660FF7F8D21AAB38;
    static const int miNumMembers = 6;

    TkID<256> mTitle;
    TkID<256> mDescription;
    TkID<256> mImage;
    cGcAudioWwiseEvents mAudioEvent;
    cTkDynamicArray<cGcMissionSequenceDetailMessagePoint> maPoints;
    cTkFixedString<128,char> macDebugText;

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
