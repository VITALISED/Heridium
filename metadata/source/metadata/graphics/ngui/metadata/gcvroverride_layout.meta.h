#pragma once
#include "../../../../../../pch.h"

enum eVROverride_Layout
{
    EVROverride_Layout_PosX = 0,
    EVROverride_Layout_PosY = 1,
    EVROverride_Layout_LayerWidth = 2,
    EVROverride_Layout_LayerHeight = 3,
    EVROverride_Layout_MaxWidth = 4,
};

class cGcVROverride_Layout
{
public:
    static const unsigned __int64 muNameHash = 0xE16B8EC5F09E6041;
    static const unsigned __int64 muTemplateHash = 0xFEC3DBA59D002B84;
    static const int miNumMembers = 2;

    eVROverride_Layout meVROverride_Layout;
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
