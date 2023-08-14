#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/simulation/environment/wfcbuildings/gcwfcmoduleprototype.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/environment/wfcbuildings/gcidpair.meta.h"

class cGcWFCModuleSet
{
public:
    static const unsigned __int64 muNameHash = 0x12D00A471DB28074;
    static const unsigned __int64 muTemplateHash = 0x717FDA53500C424;
    static const int miNumMembers = 10;

    cTkFixedString<32,char> macName;
    cTkVector3 mBlockSize;
    bool mbApplyWallThemes;
    cTkDynamicArray<cGcWFCModulePrototype> maModulePrototypes;
    cTkDynamicArray<cTkFixedString<32,char> > maConnectorsOnUpperBoundary;
    cTkDynamicArray<cTkFixedString<32,char> > maConnectorsOnLowerBoundary;
    cTkDynamicArray<cTkFixedString<32,char> > maConnectorsOnHorizontalBoundary;
    cTkDynamicArray<TkID<128> > maDefaultGroups;
    cTkDynamicArray<cGcIDPair> maCompatibleConnectors;
    float mfVerticalOffset;

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
