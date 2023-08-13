#pragma once
#include "pch.h"

enum eWealthClass
{
    EWealthClass_Poor = 0,
    EWealthClass_Average = 1,
    EWealthClass_Wealthy = 2,
    EWealthClass_Pirate = 3,
};

class cGcWealthClass
{
public:
    static const unsigned __int64 muNameHash = 0xC0B928F5E2599F60;
    static const unsigned __int64 muTemplateHash = 0xEF25EE5283DBF5E4;
    static const int miNumMembers = 1;

    eWealthClass meWealthClass;

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
