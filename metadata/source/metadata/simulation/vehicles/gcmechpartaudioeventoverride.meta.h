#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/vehicles/gcmechmeshpart.meta.h"
#include "../../../../../metadata/source/metadata/simulation/vehicles/gcmechmeshtype.meta.h"
#include "../../../../../metadata/source/metadata/audio/gcaudiowwiseevents.meta.h"

class cGcMechPartAudioEventOverride
{
public:
    static const unsigned __int64 muNameHash = 0x8713A8C7BE9925C6;
    static const unsigned __int64 muTemplateHash = 0xA5D7F7F6B6FBA873;
    static const int miNumMembers = 3;

    cGcMechMeshPart mMeshPart;
    cGcMechMeshType mMeshType;
    cGcAudioWwiseEvents mOverrideEvent;

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
