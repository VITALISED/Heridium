#pragma once

#include "../../../../../../../../pch.h"
class cTkModelResource;
class cTkTextureResource;

class cGcAbandonedFreighterComponentData
{
    static const unsigned __int64 muNameHash = 10737300097119648751;
    static const unsigned __int64 muTemplateHash = 16124300534968135911;
    static const int miNumMembers = 4;

    cTkModelResource mDungeonRootScene;
    cTkDynamicArray<cGcFreighterDungeonChoice> maDungeonOptions;
    TkID<256> mMarkerLabel;
    cTkTextureResource mMarkerIcon;

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
