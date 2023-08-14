#pragma once
#include "../../../../../../pch.h"

class cGcShipHUDTargetIconData
{
public:
    static const unsigned __int64 muNameHash = 0xFAC452E6BECE8553;
    static const unsigned __int64 muTemplateHash = 0x3E1BAB2D23187208;
    static const int miNumMembers = 6;

    cTkFixedString<128,char> macCorner;
    cTkFixedString<128,char> macLineHorizontal;
    cTkFixedString<128,char> macLineVertical;
    cTkFixedString<128,char> macGlowCorner;
    cTkFixedString<128,char> macGlowLineHorizontal;
    cTkFixedString<128,char> macGlowLineVertical;

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
