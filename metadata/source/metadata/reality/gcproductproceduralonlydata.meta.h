#pragma once
#include "pch.h"

class cGcNameGeneratorWord;
class cTkTextureResource;
class cTkTextureResource;

class cGcProductProceduralOnlyData
{
public:
    static const unsigned __int64 muNameHash = 0xEACA21EDB93AD84A;
    static const unsigned __int64 muTemplateHash = 0x914B4667BD7F5082;
    static const int miNumMembers = 8;

    int miDropWeight;
    int miBaseValueMin;
    int miBaseValueMax;
    int miAgeMin;
    int miAgeMax;
    cGcNameGeneratorWord mDescription;
    cTkTextureResource mIcon;
    cTkTextureResource mHeroIcon;

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
