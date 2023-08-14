#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/gamestate/gcteleportertype.meta.h"

class cGcMissionSequenceTeleport
{
public:
    static const unsigned __int64 muNameHash = 0xE586E1C6C9A10307;
    static const unsigned __int64 muTemplateHash = 0xBB4A61849CB9F4C8;
    static const int miNumMembers = 7;

    cTkFixedString<128,char> macMessage;
    cTkFixedString<128,char> macDebugText;
    cGcTeleporterType mTeleporterType;
    bool mbDoCameraShake;
    bool mbDoWhiteout;
    float mfSequenceTime;
    float mfEffectTime;

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
