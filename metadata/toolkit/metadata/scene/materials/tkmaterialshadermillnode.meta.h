#pragma once
#include "../../../../../../../pch.h"

class cTkMaterialShaderMillNode
{
    static const unsigned __int64 muNameHash = 0x465D81033D79E7BB;
    static const unsigned __int64 muTemplateHash = 0x575762FEBAEE8163;
    static const int miNumMembers = 11;

    int miId;
    cTkFixedString<32,char> macType;
    cTkFixedString<32,char> macValue;
    int miIValue;
    int miIValue2;
    float mfFValue;
    float mfFValue2;
    cTkDynamicArray<cTkMaterialShaderMillConnect> maInputs;
    cTkDynamicArray<cTkMaterialShaderMillConnect> maOutputs;
    int miWindowX;
    int miWindowY;

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
