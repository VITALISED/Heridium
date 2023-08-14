#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/gcspaceshipclasses.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/spaceship/ai/gcaispaceshiproles.meta.h"
#include "../../../../../../metadata/source/metadata/reality/gcfrigateclass.meta.h"

class cGcAISpaceshipModelData
{
public:
    static const unsigned __int64 muNameHash = 0xA1AD260BA61A04EE;
    static const unsigned __int64 muTemplateHash = 0x530ECCF351373B52;
    static const int miNumMembers = 4;

    cTkFixedString<128,char> macFilename;
    cGcSpaceshipClasses mClass;
    cGcAISpaceshipRoles mAIRole;
    cGcFrigateClass mFrigateClass;

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
