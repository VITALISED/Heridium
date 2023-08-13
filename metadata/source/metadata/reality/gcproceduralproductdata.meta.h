#pragma once
#include "pch.h"

class cGcNameGeneratorWord;
class cGcProductData;
class cGcBiomeList;

class cGcProceduralProductData
{
public:
    static const unsigned __int64 muNameHash = 0xC449167C8DE081CD;
    static const unsigned __int64 muTemplateHash = 0x96CA6F8639C9CC2A;
    static const int miNumMembers = 8;

    cGcNameGeneratorWord mNameGeneratorBase;
    cTkDynamicArray<cGcProceduralProductWord1> maNameGeneratorWordList;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
