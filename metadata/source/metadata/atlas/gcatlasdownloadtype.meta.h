#pragma once
#include "../../../../pch.h"

enum eDownloadType
{
    EDownloadType_Unknown = 0,
    EDownloadType_Discovery = 1,
    EDownloadType_Base = 2,
    EDownloadType_Message = 3,
};

class cGcAtlasDownloadType
{
public:
    static const unsigned __int64 muNameHash = 0x73783FC8636BAB3E;
    static const unsigned __int64 muTemplateHash = 0xC1A12C832D4AC62A;
    static const int miNumMembers = 1;

    eDownloadType meDownloadType;

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
