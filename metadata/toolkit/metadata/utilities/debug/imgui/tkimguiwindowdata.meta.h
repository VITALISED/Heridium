#pragma once
#include "../../../../../../../../pch.h"

class cTkImGuiWindowData
{
    static const unsigned __int64 muNameHash = 0x431A784D584CBE50;
    static const unsigned __int64 muTemplateHash = 0x14273A3293A528F0;
    static const int miNumMembers = 13;

    cTkFixedString<128,char> macType;
    int miWindowX;
    int miWindowY;
    int miWindowW;
    int miWindowH;
    int miWindowMinW;
    int miWindowMinH;
    bool mbWindowResize;
    int miWindowScroll;
    int miWindowTab;
    bool mbWindowOpen;
    bool mbWindowMinimised;
    bool mbWindowUsed;

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
