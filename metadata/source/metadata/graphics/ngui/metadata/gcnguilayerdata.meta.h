#pragma once

#include "../../../../../../../../pch.h"
class cGcNGuiElementData;
class cTkNGuiGraphicStyle;

enum eAltMode
{
    EAltMode_None = 0,
    EAltMode_Normal = 1,
    EAltMode_Alt = 2,
};

class cGcNGuiLayerData
{
    static const unsigned __int64 muNameHash = 6365893749474340513;
    static const unsigned __int64 muTemplateHash = 8357250393406430209;
    static const int miNumMembers = 6;

    cGcNGuiElementData mElementData;
    cTkNGuiGraphicStyle mStyle;
    cTkFixedString<128,char> macImage;
    cTkDynamicArray<cTkClassPointer> maChildren;
    cTkFixedString<128,char> macDataFilename;
    eAltMode meAltMode;

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
