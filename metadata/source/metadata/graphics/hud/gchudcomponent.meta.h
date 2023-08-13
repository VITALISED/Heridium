#pragma once
#include "../../../../../../../pch.h"

enum eAlign
{
    EAlign_Center = 0,
    EAlign_TopLeft = 1,
    EAlign_TopRight = 2,
    EAlign_BottomLeft = 3,
    EAlign_BottomRight = 4,
};

class cGcHUDComponent
{
    static const unsigned __int64 muNameHash = 0x9658E308A74D3E3C;
    static const unsigned __int64 muTemplateHash = 0x3585F426181D439A;
    static const int miNumMembers = 6;

    TkID<128> mID;
    int miPosX;
    int miPosY;
    int miWidth;
    int miHeight;
    eAlign meAlign;

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
