#pragma once

#include "../../../../../../pch.h"
enum eFrigateFlybyType
{
    EFrigateFlybyType_SingleShip = 0,
    EFrigateFlybyType_AmbientGroup = 1,
    EFrigateFlybyType_ScriptedGroup = 2,
    EFrigateFlybyType_DeepSpace = 3,
    EFrigateFlybyType_DeepSpaceCommon = 4,
};

class cGcFrigateFlybyType
{
    static const unsigned __int64 muNameHash = 2358845526642017243;
    static const unsigned __int64 muTemplateHash = 8353467258407962263;
    static const int miNumMembers = 1;

    eFrigateFlybyType meFrigateFlybyType;

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
