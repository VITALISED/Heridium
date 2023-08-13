#pragma once
#include "pch.h"

enum eScannerIconHighlightType
{
    EScannerIconHighlightType_Diamond = 0,
    EScannerIconHighlightType_Hexagon = 1,
    EScannerIconHighlightType_Tag = 2,
    EScannerIconHighlightType_Octagon = 3,
    EScannerIconHighlightType_Circle = 4,
};

class cGcScannerIconHighlightTypes
{
public:
    static const unsigned __int64 muNameHash = 0x1E73CF8A2A7FA65D;
    static const unsigned __int64 muTemplateHash = 0x34F3912D22FD83AB;
    static const int miNumMembers = 1;

    eScannerIconHighlightType meScannerIconHighlightType;

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
