#pragma once

#include "../../../../../../../../pch.h"
class cGcWFCModuleSet
{
    static const unsigned __int64 muNameHash = 1355594788395712628;
    static const unsigned __int64 muTemplateHash = 511155968730514468;
    static const int miNumMembers = 10;

    cTkFixedString<32,char> macName;
    cTkVector mBlockSize;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
