#pragma once
#include "../../../../../../pch.h"

enum eNPCSeatedPosture
{
    ENPCSeatedPosture_Sofa = 0,
    ENPCSeatedPosture_Sit = 1,
};

class cGcNPCSeatedPosture
{
public:
    static const unsigned __int64 muNameHash = 0xDE7AA917D5163592;
    static const unsigned __int64 muTemplateHash = 0x3A01B0DDBBB3040D;
    static const int miNumMembers = 1;

    eNPCSeatedPosture meNPCSeatedPosture;

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
