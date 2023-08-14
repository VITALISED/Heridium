#pragma once
#include "../../../../../../pch.h"

enum eAccessibleOverride_Layout
{
    EAccessibleOverride_Layout_PosX = 0,
    EAccessibleOverride_Layout_PosY = 1,
    EAccessibleOverride_Layout_LayerWidth = 2,
    EAccessibleOverride_Layout_LayerHeight = 3,
    EAccessibleOverride_Layout_MaxWidth = 4,
};

class cGcAccessibleOverride_Layout
{
public:
    static const unsigned __int64 muNameHash = 0xCB6432BD8E0191A0;
    static const unsigned __int64 muTemplateHash = 0x9F357DA4F413F0D;
    static const int miNumMembers = 2;

    eAccessibleOverride_Layout meAccessibleOverride_Layout;
    float mfFloatValue;

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
