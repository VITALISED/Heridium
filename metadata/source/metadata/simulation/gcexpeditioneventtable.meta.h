#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/simulation/gcexpeditioneventdata.meta.h"
#include "../../../../metadata/source/metadata/simulation/gcexpeditioninterventioneventdata.meta.h"

class cGcExpeditionEventTable
{
public:
    static const unsigned __int64 muNameHash = 0xD5BCFB328D8A80A8;
    static const unsigned __int64 muTemplateHash = 0xD6EA01BF44C4D0EA;
    static const int miNumMembers = 2;

    cTkDynamicArray<cGcExpeditionEventData> maEvents;
    cTkDynamicArray<cGcExpeditionInterventionEventData> maInterventionEvents;

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
