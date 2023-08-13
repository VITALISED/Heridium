#pragma once
#include "../../../../../../../pch.h"

enum eGridLayerTypes
{
    EGridLayerTypes_Small = 0,
    EGridLayerTypes_Large = 1,
    EGridLayerTypes_Resources_Heridium = 2,
    EGridLayerTypes_Resources_Iridium = 3,
    EGridLayerTypes_Resources_Copper = 4,
    EGridLayerTypes_Resources_Nickel = 5,
    EGridLayerTypes_Resources_Aluminium = 6,
    EGridLayerTypes_Resources_Gold = 7,
    EGridLayerTypes_Resources_Emeril = 8,
};

class cTkGridLayersEnum
{
    static const unsigned __int64 muNameHash = 0xFEF6F10412C7B60;
    static const unsigned __int64 muTemplateHash = 0xB9F17954D3E62F66;
    static const int miNumMembers = 1;

    eGridLayerTypes meGridLayerTypes;

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
