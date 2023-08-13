#pragma once
#include "../../../../../../../pch.h"

class cGcPrimaryAxis;
class cTkCreatureTailParams;

class cTkCreatureTailComponentData
{
    static const unsigned __int64 muNameHash = 0x787641F134B1AFBD;
    static const unsigned __int64 muTemplateHash = 0x38F8BA7B7D94CFC6;
    static const int miNumMembers = 4;

    cGcPrimaryAxis mLengthAxis;
    bool mbCanUseDefaultParams;
    cTkCreatureTailParams mDefaultParams;
    cTkDynamicArray<cTkCreatureTailParams> maParamVariations;

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
