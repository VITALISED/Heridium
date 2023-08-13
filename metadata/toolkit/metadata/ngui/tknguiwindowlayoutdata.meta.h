#pragma once
#include "pch.h"

enum eWindowState
{
    EWindowState_Open = 0,
    EWindowState_Minimised = 1,
    EWindowState_Closed = 2,
};

class cTkNGuiWindowLayoutData
{
public:
    static const unsigned __int64 muNameHash = 0x9650958F04D49C46;
    static const unsigned __int64 muTemplateHash = 0x80CA7ECB56702722;
    static const int miNumMembers = 11;

    cTkFixedString<128,char> macName;
    cTkFixedArray<cTkFixedString<128,char>, 32> maTabs;
    float mfPositionX;
    float mfPositionY;
    float mfSizeX;
    float mfSizeY;
    float mfSeparator;
    int miActiveTabIdx;
    float mfScrollX;
    float mfScrollY;
    eWindowState meWindowState;

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
