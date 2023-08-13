#pragma once
#include "pch.h"

class cGcWFCModuleSet
{
public:
    static const unsigned __int64 muNameHash = 0x12D00A471DB28074;
    static const unsigned __int64 muTemplateHash = 0x717FDA53500C424;
    static const int miNumMembers = 10;

    cTkFixedString<32,char> macName;
    cTkVector3 mBlockSize;
    bool mbApplyWallThemes;
    cTkDynamicArray<cGcWFCModulePrototype1> maModulePrototypes;
    cTkDynamicArray<cTkFixedString<32,char>1> maConnectorsOnUpperBoundary;
    cTkDynamicArray<cTkFixedString<32,char>1> maConnectorsOnLowerBoundary;
    cTkDynamicArray<cTkFixedString<32,char>1> maConnectorsOnHorizontalBoundary;
    cTkDynamicArray<TkID<128>1> maDefaultGroups;
    cTkDynamicArray<cGcIDPair1> maCompatibleConnectors;
    float mfVerticalOffset;

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
