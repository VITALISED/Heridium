#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/spaceship/ai/gcaispaceshiptypes.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/gcspaceshipclasses.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/ecosystem/creatures/behaviours/data/gcprimaryaxis.meta.h"
#include "../../../../../../metadata/toolkit/metadata/tkmodelresource.meta.h"

class cGcAISpaceshipComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x4F5433BCFC028B49;
    static const unsigned __int64 muTemplateHash = 0xC53919B53D4EA93E;
    static const int miNumMembers = 5;

    cGcAISpaceshipTypes mType;
    cGcSpaceshipClasses mClass;
    cGcPrimaryAxis mAxis;
    cTkModelResource mHangar;
    bool mbIsSpaceAnomaly;

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
