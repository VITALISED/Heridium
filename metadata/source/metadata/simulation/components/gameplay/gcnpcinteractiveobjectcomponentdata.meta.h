#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/npcs/gcnpcinteractiveobjecttype.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/npcs/gcnpcinteractiveobjectstate.meta.h"

class cGcNPCInteractiveObjectComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x6EB308F16DDC755C;
    static const unsigned __int64 muTemplateHash = 0xD5ECDD0A3503E78F;
    static const int miNumMembers = 5;

    cGcNPCInteractiveObjectType mInteractiveObjectType;
    int miMaxCapacity;
    float mfDurationMin;
    float mfDurationMax;
    cTkDynamicArray<cGcNPCInteractiveObjectState> maStates;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
