#pragma once

#include "../../../../../../../pch.h"
class cGcHand;
class cGcScanEffectData;

class cGcPlayerEmotePropData
{
    static const unsigned __int64 muNameHash = 9081620293684451540;
    static const unsigned __int64 muTemplateHash = 4487680146936616903;
    static const int miNumMembers = 7;

    cTkFixedString<128,char> macModel;
    float mfScale;
    cGcHand mHand;
    bool mbIsHologram;
    cTkFixedString<64,char> macScanEffectNodeName;
    cGcScanEffectData mScanEffect;
    float mfDelayTime;

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