#pragma once

#include "../../../../../../pch.h"
class cGcSimpleIkRecoilComponentData
{
    static const unsigned __int64 muNameHash = 17660452912826839784;
    static const unsigned __int64 muTemplateHash = 6050323425252857218;
    static const int miNumMembers = 9;

    cTkFixedString<256,char> macEndJoint;
    float mfHitReactDirectedMin;
    float mfHitReactDirectedMax;
    float mfHitReactRandomMin;
    float mfHitReactRandomMax;
    float mfAngleLimit;
    float mfMinHitReactTime;
    float mfRecoverTime;
    float mfActiveRange;

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