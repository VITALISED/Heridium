#pragma once
#include "pch.h"

enum eFeatureTypes
{
    EFeatureTypes_River = 0,
    EFeatureTypes_Crater = 1,
    EFeatureTypes_Arches = 2,
    EFeatureTypes_ArchesSmall = 3,
    EFeatureTypes_Blobs = 4,
    EFeatureTypes_BlobsSmall = 5,
    EFeatureTypes_Substance = 6,
};

class cTkFeaturesEnum
{
public:
    static const unsigned __int64 muNameHash = 0x34E815E84B84D42B;
    static const unsigned __int64 muTemplateHash = 0x21B18A160AD77B69;
    static const int miNumMembers = 1;

    eFeatureTypes meFeatureTypes;

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
