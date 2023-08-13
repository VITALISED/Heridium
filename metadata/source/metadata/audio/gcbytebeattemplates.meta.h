#pragma once
#include "pch.h"

class cGcByteBeatTemplates
{
public:
    static const unsigned __int64 muNameHash = 0xBBB68492659143C4;
    static const unsigned __int64 muTemplateHash = 0x34F44B119AE0F661;
    static const int miNumMembers = 10;

    cTkDynamicArray<cTkFixedString<64,char>1> maInitialTrees;
    cTkDynamicArray<cGcByteBeatTemplate1> maTemplates;
    cTkFixedArray<float, 18> maCombinerWeights;
    cTkDynamicArray<cGcByteBeatDrum1> maKickDrums;
    cTkDynamicArray<cGcByteBeatDrum1> maSnareDrums;
    cTkDynamicArray<cGcByteBeatDrum1> maHiHats;
    float mfOperatorPermuteChance;
    float mfTemplateCombineChanceAtRoot;
    float mfTemplateCombineChance;
    cTkDynamicArray<cGcByteBeatSong1> maSongs;

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
