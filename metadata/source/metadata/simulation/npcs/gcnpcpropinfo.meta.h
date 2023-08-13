#pragma once
#include "../../../../../../../pch.h"

class cGcScanEffectData;
class cGcTechnologyCategory;

class cGcNPCPropInfo
{
    static const unsigned __int64 muNameHash = 0x9441C44CA7215426;
    static const unsigned __int64 muTemplateHash = 0x38C77ECB344C2FB4;
    static const int miNumMembers = 6;

    cTkFixedString<128,char> macModel;
    bool mbHologram;
    cGcScanEffectData mScanEffect;
    cTkFixedString<64,char> macScanEffectNodeName;
    float mfWeight;
    cGcTechnologyCategory mShopType;

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
