#pragma once
#include "../../../../../../../pch.h"

enum eGenericIconType
{
    EGenericIconType_None = 0,
    EGenericIconType_Interaction = 1,
    EGenericIconType_SpaceStation = 2,
    EGenericIconType_SpaceAnomaly = 3,
    EGenericIconType_SpaceAtlas = 4,
    EGenericIconType_Nexus = 5,
};

class cGcGenericIconTypes
{
    static const unsigned __int64 muNameHash = 0xA4091406380F5113;
    static const unsigned __int64 muTemplateHash = 0xC364E4B5E5B16679;
    static const int miNumMembers = 1;

    eGenericIconType meGenericIconType;

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
