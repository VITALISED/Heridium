#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/graphics/ngui/metadata/gcnguielementdata.meta.h"
#include "../../../../../../metadata/toolkit/metadata/ngui/tknguigraphicstyle.meta.h"

enum eAltMode
{
    EAltMode_None = 0,
    EAltMode_Normal = 1,
    EAltMode_Alt = 2,
};

class cGcNGuiLayerData
{
public:
    static const unsigned __int64 muNameHash = 0x585832A31F4C2EA1;
    static const unsigned __int64 muTemplateHash = 0x73FAEAF445FBDC01;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
