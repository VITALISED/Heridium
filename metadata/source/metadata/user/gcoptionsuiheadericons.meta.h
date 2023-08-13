#pragma once
#include "pch.h"

enum eOptionsUIHeaderIconType
{
    EOptionsUIHeaderIconType_General = 0,
    EOptionsUIHeaderIconType_Ship = 1,
    EOptionsUIHeaderIconType_Cog = 2,
    EOptionsUIHeaderIconType_Scanner = 3,
    EOptionsUIHeaderIconType_Advanced = 4,
};

class cGcOptionsUIHeaderIcons
{
public:
    static const unsigned __int64 muNameHash = 0x3CD82FC9BE1CC713;
    static const unsigned __int64 muTemplateHash = 0xD47702419626C73A;
    static const int miNumMembers = 1;

    eOptionsUIHeaderIconType meOptionsUIHeaderIconType;

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
