#pragma once
#include "../../../../pch.h"

enum eExpeditionCategory
{
    EExpeditionCategory_Combat = 0,
    EExpeditionCategory_Exploration = 1,
    EExpeditionCategory_Mining = 2,
    EExpeditionCategory_Diplomacy = 3,
    EExpeditionCategory_Balanced = 4,
};

class cGcExpeditionCategory
{
public:
    static const unsigned __int64 muNameHash = 0x4F6C65318BF17139;
    static const unsigned __int64 muTemplateHash = 0xE40903D9360CA39C;
    static const int miNumMembers = 1;

    eExpeditionCategory meExpeditionCategory;

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
