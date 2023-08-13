#pragma once

#include "../../../../../../pch.h"
class cGcInventoryLayout;
class cGcInventoryContainer;
class cGcResourceElement;

class cGcMultitoolData
{
    static const unsigned __int64 muNameHash = 3096099773996927823;
    static const unsigned __int64 muTemplateHash = 9599801094729982491;
    static const int miNumMembers = 9;

    cGcInventoryLayout mLayout;
    cGcInventoryContainer mStore;
    cTkSeed mSeed;
    cTkFixedString<32,char> macName;
    bool mbIsLarge;
    int miPrimaryMode;
    int miSecondaryMode;
    bool mbUseLegacyColours;
    cGcResourceElement mResource;

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
