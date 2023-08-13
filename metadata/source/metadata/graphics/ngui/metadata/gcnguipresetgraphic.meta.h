#pragma once
#include "../../../../../../../../pch.h"

class cGcNGuiLayoutData;
class cTkNGuiGraphicStyle;

class cGcNGuiPresetGraphic
{
    static const unsigned __int64 muNameHash = 0x247C56DDB7B4E25A;
    static const unsigned __int64 muTemplateHash = 0xC63CBB76AABD52D4;
    static const int miNumMembers = 4;

    TkID<128> mPresetID;
    cGcNGuiLayoutData mLayout;
    cTkNGuiGraphicStyle mStyle;
    cTkFixedString<128,char> macImage;

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
