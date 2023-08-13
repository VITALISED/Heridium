#pragma once
#include "pch.h"

enum eNoiseLayerTypes
{
    ENoiseLayerTypes_Base = 0,
    ENoiseLayerTypes_Hill = 1,
    ENoiseLayerTypes_Mountain = 2,
    ENoiseLayerTypes_Rock = 3,
    ENoiseLayerTypes_UnderWater = 4,
    ENoiseLayerTypes_Texture = 5,
    ENoiseLayerTypes_Elevation = 6,
    ENoiseLayerTypes_Continent = 7,
};

class cTkNoiseLayersEnum
{
public:
    static const unsigned __int64 muNameHash = 0xDF72B6BAF8A085A2;
    static const unsigned __int64 muTemplateHash = 0x17A8EF62D5BC39D6;
    static const int miNumMembers = 1;

    eNoiseLayerTypes meNoiseLayerTypes;

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
