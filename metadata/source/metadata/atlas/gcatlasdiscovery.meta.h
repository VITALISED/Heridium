#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/atlas/gcatlasdownloadtype.meta.h"
#include "../../../../metadata/source/metadata/reality/gcdiscoveryowner.meta.h"
#include "../../../../metadata/source/metadata/atlas/gcatlasdiscoverydata.meta.h"
#include "../../../../metadata/source/metadata/atlas/gcatlasdiscoverymetadata.meta.h"
#include "../../../../metadata/source/metadata/atlas/gcatlasmessage.meta.h"

class cGcAtlasDiscovery
{
public:
    static const unsigned __int64 muNameHash = 0x886C03C3F3987F4;
    static const unsigned __int64 muTemplateHash = 0x3A1F612CFFA8437F;
    static const int miNumMembers = 7;

    cGcAtlasDownloadType mPackageType;
    cGcDiscoveryOwner mOwner;
    cGcAtlasDiscoveryData mData;
    cGcAtlasDiscoveryMetadata mMetadata;
    cGcAtlasMessage mMessageData;
    cTkFixedString<64,char> macRID;
    cTkFixedString<32,char> macPTK;

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
