#pragma once

#include "../../../../../../../../pch.h"
class cTkImGuiWindowData;

class cTkImGuiData
{
    static const unsigned __int64 muNameHash = 16785297155782553772;
    static const unsigned __int64 muTemplateHash = 4620551845422123684;
    static const int miNumMembers = 7;

    cTkImGuiWindowData mMainWindow;
    bool mbMaximised;
    int miDimensionX;
    int miDimensionY;
    cTkFixedArray<cTkFixedString<128,char> > maRecentToolbox;
    cTkFixedArray<cTkImGuiWindowData> maWindowTable;
    int miWindowCount;

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
