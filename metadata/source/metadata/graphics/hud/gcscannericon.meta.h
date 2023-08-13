#pragma once
#include "../../../../../../../pch.h"

class cTkTextureResource;
class cTkTextureResource;
class cGcScannerIconHighlightTypes;

class cGcScannerIcon
{
    static const unsigned __int64 muNameHash = 0x85905E340468CC13;
    static const unsigned __int64 muTemplateHash = 0xBFF25FB08364A24A;
    static const int miNumMembers = 3;

    cTkTextureResource mMain;
    cTkTextureResource mSmall;
    cGcScannerIconHighlightTypes mHighlight;

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
