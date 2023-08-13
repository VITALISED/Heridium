#pragma once
#include "../../../../../../../../../pch.h"

enum eShotBy
{
    EShotBy_Player = 0,
    EShotBy_Anything = 1,
    EShotBy_PlayerOrRemotePlayer = 2,
};

class cGcBeenShotEvent
{
    static const unsigned __int64 muNameHash = 0xF554DC208673EE3D;
    static const unsigned __int64 muTemplateHash = 0xC7EECD09781E1870;
    static const int miNumMembers = 3;

    eShotBy meShotBy;
    int miDamageThreshold;
    float mfHealthThreshold;

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
