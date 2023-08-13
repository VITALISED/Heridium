#pragma once

#include "../../../../../../pch.h"
enum eVertical
{
    EVertical_Top = 0,
    EVertical_Middle = 1,
    EVertical_Bottom = 2,
};

enum eHorizontal
{
    EHorizontal_Left = 0,
    EHorizontal_Center = 1,
    EHorizontal_Right = 2,
};

class cTkNGuiAlignment
{
    static const unsigned __int64 muNameHash = 15125322572576128328;
    static const unsigned __int64 muTemplateHash = 8213023363731698719;
    static const int miNumMembers = 2;

    eVertical meVertical;
    eHorizontal meHorizontal;

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
