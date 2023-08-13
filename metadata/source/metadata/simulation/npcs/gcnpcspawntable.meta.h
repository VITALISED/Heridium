#pragma once

#include "../../../../../../../pch.h"
class cGcNPCSpawnTable
{
    static const unsigned __int64 muNameHash = 17229282327775738477;
    static const unsigned __int64 muTemplateHash = 7847536495400137678;
    static const int miNumMembers = 4;

    cTkFixedArray<cTkFixedString<128,char> > maNPCModelNames;
    cTkFixedArray<float> maNPCRaceScale;
    cTkDynamicArray<cGcUniqueNPCSpawnData> maUniqueNPCs;
    cTkDynamicArray<cGcNPCPlacementInfo> maPlacementInfos;

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
