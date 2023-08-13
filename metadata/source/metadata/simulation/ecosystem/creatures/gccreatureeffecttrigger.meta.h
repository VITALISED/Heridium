#pragma once
#include "../../../../../../../../pch.h"

class cGcCreatureEffectTrigger
{
    static const unsigned __int64 muNameHash = 0x4E07F5FB46E3BD82;
    static const unsigned __int64 muTemplateHash = 0xF2C93E6788CE0821;
    static const int miNumMembers = 6;

    TkID<128> mEffect;
    cTkDynamicArray<cTkFixedString<256,char> > maJointName;
    float mfScale;
    TkID<128> mAnim;
    int miFrame;
    bool mbGroundTint;

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
