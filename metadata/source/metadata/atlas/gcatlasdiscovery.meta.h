#pragma once

#include "../../../../../../pch.h"
class cGcAtlasDownloadType;
class cGcDiscoveryOwner;
class cGcAtlasDiscoveryData;
class cGcAtlasDiscoveryMetadata;
class cGcAtlasMessage;

class cGcAtlasDiscovery
{
    static const unsigned __int64 muNameHash = 614389764173957108;
    static const unsigned __int64 muTemplateHash = 4188173024373523327;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
