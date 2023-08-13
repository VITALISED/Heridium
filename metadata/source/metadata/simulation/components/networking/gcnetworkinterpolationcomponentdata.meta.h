#pragma once

#include "../../../../../../../../pch.h"
enum eSynchroniseScale
{
    ESynchroniseScale_Never = 0,
    ESynchroniseScale_Once = 1,
    ESynchroniseScale_Always = 2,
};

class cGcNetworkInterpolationComponentData
{
    static const unsigned __int64 muNameHash = 1912603710076108170;
    static const unsigned __int64 muTemplateHash = 10605892602786088557;
    static const int miNumMembers = 2;

    eSynchroniseScale meSynchroniseScale;
    bool mbSupportTeleportation;

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
