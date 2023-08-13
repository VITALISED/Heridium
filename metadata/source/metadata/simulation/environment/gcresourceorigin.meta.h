#pragma once

#include "../../../../../../../pch.h"
enum eResourceOrigin
{
    EResourceOrigin_Terrain = 0,
    EResourceOrigin_Crystal = 1,
    EResourceOrigin_Asteroid = 2,
    EResourceOrigin_Robot = 3,
    EResourceOrigin_Depot = 4,
};

class cGcResourceOrigin
{
    static const unsigned __int64 muNameHash = 12090364913148372219;
    static const unsigned __int64 muTemplateHash = 12227855538256014234;
    static const int miNumMembers = 1;

    eResourceOrigin meResourceOrigin;

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
