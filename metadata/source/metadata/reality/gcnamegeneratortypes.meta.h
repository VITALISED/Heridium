#pragma once

#include "../../../../../../pch.h"
enum eMarkovSelector
{
    EMarkovSelector_Generic = 0,
    EMarkovSelector_Mineral = 1,
    EMarkovSelector_Region_NO = 2,
    EMarkovSelector_Region_RU = 3,
    EMarkovSelector_Region_CH = 4,
    EMarkovSelector_Region_JP = 5,
    EMarkovSelector_Region_LT = 6,
    EMarkovSelector_Region_FL = 7,
};

class cGcNameGeneratorTypes
{
    static const unsigned __int64 muNameHash = 14553952472196245085;
    static const unsigned __int64 muTemplateHash = 17953467836818369648;
    static const int miNumMembers = 1;

    eMarkovSelector meMarkovSelector;

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
