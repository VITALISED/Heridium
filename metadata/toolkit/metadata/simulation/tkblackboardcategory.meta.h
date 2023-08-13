#pragma once
#include "pch.h"

enum eBlackboardCategory
{
    EBlackboardCategory_Local = 0,
    EBlackboardCategory_Archetype = 1,
    EBlackboardCategory_PlayerControl = 2,
};

class cTkBlackboardCategory
{
public:
    static const unsigned __int64 muNameHash = 0x29BC4AF5B8027FD;
    static const unsigned __int64 muTemplateHash = 0x9458BEB87AD22C4D;
    static const int miNumMembers = 1;

    eBlackboardCategory meBlackboardCategory;

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
