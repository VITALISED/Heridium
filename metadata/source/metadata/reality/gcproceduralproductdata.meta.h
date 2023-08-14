#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/reality/gcnamegeneratorword.meta.h"
#include "../../../../metadata/source/metadata/reality/gcproceduralproductword.meta.h"
#include "../../../../metadata/source/metadata/reality/gcproductdata.meta.h"
#include "../../../../metadata/source/metadata/reality/gcproductproceduralonlydata.meta.h"
#include "../../../../metadata/source/metadata/simulation/solarsystem/planet/gcbiomelist.meta.h"

class cGcProceduralProductData
{
public:
    static const unsigned __int64 muNameHash = 0xC449167C8DE081CD;
    static const unsigned __int64 muTemplateHash = 0x96CA6F8639C9CC2A;
    static const int miNumMembers = 8;

    cGcNameGeneratorWord mNameGeneratorBase;
    cTkDynamicArray<cGcProceduralProductWord> maNameGeneratorWordList;
    int miNameGeneratorLegacyRolls;
    cGcProductData mProduct;
    cTkFixedArray<cGcProductProceduralOnlyData, 3> maProceduralData;
    cGcBiomeList mPerBiomeDropWeights;
    cTkFixedString<32,char> macDeployableProductID;
    bool mbRecordsStat;

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
