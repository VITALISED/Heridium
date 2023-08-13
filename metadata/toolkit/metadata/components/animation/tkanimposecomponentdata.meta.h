#pragma once

#include "../../../../../../../pch.h"
class cTkAnimPoseComponentData
{
    static const unsigned __int64 muNameHash = 7924090933465932854;
    static const unsigned __int64 muTemplateHash = 13867632144210846151;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
