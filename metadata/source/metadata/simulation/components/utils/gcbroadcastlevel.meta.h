#pragma once
#include "pch.h"

enum eBroadcastLevel
{
    EBroadcastLevel_Scene = 0,
    EBroadcastLevel_LocalModel = 1,
    EBroadcastLevel_Local = 2,
};

class cGcBroadcastLevel
{
public:
    static const unsigned __int64 muNameHash = 0x788C67D6B87C29E3;
    static const unsigned __int64 muTemplateHash = 0x3BCCD8E73F2DF785;
    static const int miNumMembers = 1;

    eBroadcastLevel meBroadcastLevel;

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
