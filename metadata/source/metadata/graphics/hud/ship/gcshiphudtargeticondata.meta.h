#pragma once

#include "../../../../../../../../pch.h"
class cGcShipHUDTargetIconData
{
    static const unsigned __int64 muNameHash = 18069658755914433875;
    static const unsigned __int64 muTemplateHash = 4475358865073402376;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};