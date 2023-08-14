#pragma once
#include "../../../../../../pch.h"

enum eAction
{
    EAction_Click = 0,
    EAction_Hover = 1,
    EAction_ArrowLeft = 2,
    EAction_ArrowRight = 3,
};

class cGcNGuiActionData
{
public:
    static const unsigned __int64 muNameHash = 0x2D0ED597896EB5AF;
    static const unsigned __int64 muTemplateHash = 0x79A76EAFBFCDDB6B;
    static const int miNumMembers = 3;

    TkID<128> mLayerID;
    cTkFixedString<128,char> macData;
    eAction meAction;

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
