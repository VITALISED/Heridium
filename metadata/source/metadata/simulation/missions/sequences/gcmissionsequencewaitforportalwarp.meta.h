#pragma once
#include "../../../../../../pch.h"

class cGcMissionSequenceWaitForPortalWarp
{
public:
    static const unsigned __int64 muNameHash = 0x416E9E84AB204114;
    static const unsigned __int64 muTemplateHash = 0x7B630FEAA5DAE67F;
    static const int miNumMembers = 4;

    cTkFixedString<128,char> macMessage;
    cTkFixedString<128,char> macDebugText;
    bool mbWarpToSpace;
    cTkFixedString<32,char> macOverrideUA;

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
