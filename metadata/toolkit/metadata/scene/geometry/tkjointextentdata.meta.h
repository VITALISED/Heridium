#pragma once
#include "../../../../../pch.h"

class cTkJointExtentData
{
public:
    static const unsigned __int64 muNameHash = 0xB538605B35EDD12C;
    static const unsigned __int64 muTemplateHash = 0xBFECB029B47E76AA;
    static const int miNumMembers = 4;

    cTkFixedArray<float, 3> maJointExtentMin;
    cTkFixedArray<float, 3> maJointExtentMax;
    cTkFixedArray<float, 3> maJointExtentCenter;
    cTkFixedArray<float, 3> maJointExtentStdDev;

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
