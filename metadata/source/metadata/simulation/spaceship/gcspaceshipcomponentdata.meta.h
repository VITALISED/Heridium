#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/gcspaceshipclasses.meta.h"
#include "../../../../../metadata/toolkit/metadata/tkmodelrendererdata.meta.h"

class cGcSpaceshipComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x1C94F7F917E32E73;
    static const unsigned __int64 muTemplateHash = 0x7F973269DD118BFC;
    static const int miNumMembers = 8;

    cGcSpaceshipClasses mClass;
    cTkFixedString<128,char> macCockpit;
    float mfMaxHeadTurn;
    float mfMaxHeadPitchUp;
    float mfMaxHeadPitchDown;
    int miDefaultHealth;
    float mfFoVFixedDistance;
    cTkModelRendererData mRenderer;

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
