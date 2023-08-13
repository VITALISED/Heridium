#pragma once

#include "../../../../../../../../pch.h"
enum eMenuToClose
{
    EMenuToClose_QuickMenu = 0,
    EMenuToClose_BuildMenu = 1,
    EMenuToClose_Inventory = 2,
    EMenuToClose_AllDetailMessages = 3,
};

class cGcMissionSequenceCloseMenu
{
    static const unsigned __int64 muNameHash = 16585498084000859990;
    static const unsigned __int64 muTemplateHash = 13955708971393323635;
    static const int miNumMembers = 3;

    float mfDelay;
    eMenuToClose meMenuToClose;
    cTkFixedString<128,char> macDebugText;

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
