#pragma once

#include "../../../../../../../pch.h"
class cTkTextureResource;

class cGcBaseBuildingGroup
{
    static const unsigned __int64 muNameHash = 17545763798379542786;
    static const unsigned __int64 muTemplateHash = 3765515434787585216;
    static const int miNumMembers = 5;

    TkID<128> mID;
    TkID<256> mName;
    cTkTextureResource mIcon;
    int miDefaultColourIdx;
    cTkDynamicArray<cGcBaseBuildingSubGroup> maSubGroups;

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