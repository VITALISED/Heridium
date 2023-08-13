#pragma once

#include "../../../../../../pch.h"
class cGcResourceElement;
class cGcInventoryContainer;
class cGcInventoryContainer;
class cGcInventoryContainer;
class cGcInventoryLayout;

class cGcPlayerOwnershipData
{
    static const unsigned __int64 muNameHash = 17714904727178827515;
    static const unsigned __int64 muTemplateHash = 6409961812804865472;
    static const int miNumMembers = 9;

    cTkFixedString<32,char> macName;
    cGcResourceElement mResource;
    cGcInventoryContainer mInventory;
    cGcInventoryContainer mInventory_Cargo;
    cGcInventoryContainer mInventory_TechOnly;
    cGcInventoryLayout mInventoryLayout;
    unsigned __int64 mui64Location;
    cTkVector4 mPosition;
    cTkVector4 mDirection;

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
