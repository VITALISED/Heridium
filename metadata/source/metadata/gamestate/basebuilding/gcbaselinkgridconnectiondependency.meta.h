#pragma once

#include "../../../../../../../pch.h"
class cGcBaseLinkGridConnectionData;

enum eDependentEffect
{
    EDependentEffect_None = 0,
    EDependentEffect_EnablesRate = 1,
    EDependentEffect_DisablesRate = 2,
    EDependentEffect_EnablesConnection = 3,
    EDependentEffect_DisablesConnection = 4,
};

class cGcBaseLinkGridConnectionDependency
{
    static const unsigned __int64 muNameHash = 13384292967221608750;
    static const unsigned __int64 muTemplateHash = 3830244842263681823;
    static const int miNumMembers = 5;

    cGcBaseLinkGridConnectionData mConnection;
    int miDependentRate;
    eDependentEffect meDependentEffect;
    bool mbDisableWhenOffline;
    bool mbTransfersConnections;

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
