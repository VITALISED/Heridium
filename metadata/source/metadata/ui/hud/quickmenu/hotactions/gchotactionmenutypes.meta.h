#pragma once

#include "../../../../../../../../../pch.h"
enum eHotActionMenuTypes
{
    EHotActionMenuTypes_OnFoot = 0,
    EHotActionMenuTypes_InShip = 1,
    EHotActionMenuTypes_InExocraft = 2,
};

class cGcHotActionMenuTypes
{
    static const unsigned __int64 muNameHash = 17348080163580108598;
    static const unsigned __int64 muTemplateHash = 7141692099758773821;
    static const int miNumMembers = 1;

    eHotActionMenuTypes meHotActionMenuTypes;

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