#pragma once

#include "../../../../../../../pch.h"
class cTkCreatureTailJoints
{
    static const unsigned __int64 muNameHash = 256000943805254883;
    static const unsigned __int64 muTemplateHash = 14324724163166954027;
    static const int miNumMembers = 10;

    cTkFixedString<32,char> macStartJoint;
    cTkFixedString<32,char> macEndJoint;
    float mfInterpSpeedHead;
    float mfInterpSpeedTail;
    float mfPullSpeedMin;
    float mfPullSpeedMax;
    float mfStrengthX;
    float mfStrengthY;
    float mfStrengthZ;
    float mfSwimPhaseOffset;

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
