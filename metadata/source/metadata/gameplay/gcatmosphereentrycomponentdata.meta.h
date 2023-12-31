#pragma once
#include "../../../../pch.h"

class cGcAtmosphereEntryComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x90485A00D3954CE2;
    static const unsigned __int64 muTemplateHash = 0xAD817E4B7355FC77;
    static const int miNumMembers = 6;

    bool mbAutoEntry;
    float mfEntryTime;
    float mfEntryOffset;
    float mfEditTerrainRadius;
    TkID<128> mImpactEffect;
    TkID<128> mFlareEffect;

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
