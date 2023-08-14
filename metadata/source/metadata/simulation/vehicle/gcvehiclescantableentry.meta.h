#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/tktextureresource.meta.h"

class cGcVehicleScanTableEntry
{
public:
    static const unsigned __int64 muNameHash = 0xBAC942D350F478B1;
    static const unsigned __int64 muTemplateHash = 0x757E6C85353294DA;
    static const int miNumMembers = 4;

    cTkDynamicArray<TkID<256> > maScanList;
    TkID<256> mName;
    TkID<128> mRequiredTech;
    cTkTextureResource mIcon;

    static bool ClassPointerCompare(const cTkClassPointer* lPtr, const cTkClassPointer *lOtherPtr);
    static void ClassPointerCopy(cTkClassPointer* lDest, const cTkClassPointer *lSource);
    static cTkClassPointer* ClassPointerCreate(cTkClassPointer* result);
    static void ClassPointerCreateDefault(cTkClassPointer* lPtr, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerDestroy(cTkClassPointer* lPtr);
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
