#pragma once
#include "../../../../../../pch.h"

enum eWeightingCurve
{
    EWeightingCurve_NoWeighting = 0,
    EWeightingCurve_MaxIsUncommon = 1,
    EWeightingCurve_MaxIsRare = 2,
    EWeightingCurve_MaxIsSuperRare = 3,
    EWeightingCurve_MinIsUncommon = 4,
    EWeightingCurve_MinIsRare = 5,
    EWeightingCurve_MinIsSuperRare = 6,
};

class cGcWeightingCurve
{
    static const unsigned __int64 muNameHash = 0xB33B21B3131CD08D;
    static const unsigned __int64 muTemplateHash = 0x8A2194B184BA1590;
    static const int miNumMembers = 1;

    eWeightingCurve meWeightingCurve;

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
