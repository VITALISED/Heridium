#pragma once
#include "../../../../../../pch.h"

enum eWonderCategoryComparisonType
{
    EWonderCategoryComparisonType_Max = 0,
    EWonderCategoryComparisonType_Min = 1,
};

class cGcWonderCategoryConfig
{
    static const unsigned __int64 muNameHash = 0x77128F31CC435E5F;
    static const unsigned __int64 muTemplateHash = 0x8BE6A0FD938188A4;
    static const int miNumMembers = 4;

    eWonderCategoryComparisonType meWonderCategoryComparisonType;
    float mfThresholdValue;
    TkID<256> mLocID;
    TkID<128> mStatID;

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
