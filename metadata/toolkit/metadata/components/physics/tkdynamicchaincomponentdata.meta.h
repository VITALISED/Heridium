#pragma once

#include "../../../../../../../pch.h"
class cTkDynamicChainComponentData
{
    static const unsigned __int64 muNameHash = 4039049434843838519;
    static const unsigned __int64 muTemplateHash = 3301933358206749778;
    static const int miNumMembers = 15;

    float mfAngularLimit;
    float mfTwistLimit;
    float mfMotorStrengthCone;
    float mfMotorStrengthTwist;
    float mfMaxMotorForce;
    float mfGravity;
    float mfAirThickness;
    float mfVertAirThickness;
    float mfWindStrength;
    float mfLinearDamping;
    float mfAngularDamping;
    float mfInitialBodyMass;
    float mfBodyMassChange;
    bool mbWeightByJointLength;
    cTkDynamicArray<cTkFixedString<32,char> > maIgnoreJoints;

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