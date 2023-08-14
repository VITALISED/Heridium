#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/toolkit/metadata/animation/tkanimposedata.meta.h"
#include "../../../../../metadata/toolkit/metadata/animation/tkanimposecorrelationdata.meta.h"
#include "../../../../../metadata/toolkit/metadata/animation/tkanimposeexampledata.meta.h"
#include "../../../../../metadata/toolkit/metadata/animation/tkanimposebabymodifier.meta.h"

class cTkAnimPoseComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x6DF806B869216436;
    static const unsigned __int64 muTemplateHash = 0xC073B9F61779E1C7;
    static const int miNumMembers = 8;

    cTkDynamicArray<cTkAnimPoseData> maPoseAnims;
    cTkFixedString<128,char> macFilename;
    cTkDynamicArray<cTkAnimPoseCorrelationData> maCorrelations;
    cTkDynamicArray<cTkAnimPoseExampleData> maExamples;
    cTkDynamicArray<float> maCorrelationMat;
    float mfAdultCorrelationValue;
    cTkDynamicArray<cTkAnimPoseBabyModifier> maBabyModifiers;
    bool mbShouldRandomise;

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
