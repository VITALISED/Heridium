#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"

class cGcHUDStartup
{
public:
    static const unsigned __int64 muNameHash = 0x4B24756D3BA22E88;
    static const unsigned __int64 muTemplateHash = 0x7B00F970949EC917;
    static const int miNumMembers = 3;

    cGcAudioWwiseEvents mAudio;
    float mfTime;
    TkID<128> mRequiresTechBroken;

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
