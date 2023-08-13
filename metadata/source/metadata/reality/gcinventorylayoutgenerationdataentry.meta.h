#pragma once

#include "../../../../../../pch.h"
class cGcInventoryLayoutGenerationBounds;
class cGcInventoryLayoutGenerationBounds;
class cGcInventoryIndex;

class cGcInventoryLayoutGenerationDataEntry
{
    static const unsigned __int64 muNameHash = 1575404401002618587;
    static const unsigned __int64 muTemplateHash = 17587745618184323224;
    static const int miNumMembers = 10;

    int miMinSlots;
    int miMaxSlots;
    int miMinTechSlots;
    int miMaxTechSlots;
    int miMinCargoSlots;
    int miMaxCargoSlots;
    cGcInventoryLayoutGenerationBounds mBounds;
    cGcInventoryLayoutGenerationBounds mTechBounds;
    int miMaxNumSpecialTechSlots;
    cGcInventoryIndex mSpecialTechSlotMaxIndex;

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
