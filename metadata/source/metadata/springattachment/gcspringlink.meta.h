#pragma once
#include "pch.h"

enum ePivotAnchorsTo
{
    EPivotAnchorsTo_Itself = 0,
    EPivotAnchorsTo_Parent = 1,
    EPivotAnchorsTo_Node = 2,
    EPivotAnchorsTo_NodeWithAnchor = 3,
};

enum eApplyMotionScaleIn
{
    EApplyMotionScaleIn_Disabled = 0,
    EApplyMotionScaleIn_Uniform = 1,
    EApplyMotionScaleIn_Itself = 2,
    EApplyMotionScaleIn_Parent = 3,
    EApplyMotionScaleIn_Component = 4,
};

enum eApplyMotionLimitsIn
{
    EApplyMotionLimitsIn_Disabled = 0,
    EApplyMotionLimitsIn_Uniform = 1,
    EApplyMotionLimitsIn_Itself = 2,
    EApplyMotionLimitsIn_Parent = 3,
    EApplyMotionLimitsIn_Component = 4,
};

enum eApplyAngularMotionScaleIn
{
    EApplyAngularMotionScaleIn_Disabled = 0,
    EApplyAngularMotionScaleIn_Uniform = 1,
    EApplyAngularMotionScaleIn_Itself = 2,
    EApplyAngularMotionScaleIn_Parent = 3,
    EApplyAngularMotionScaleIn_Component = 4,
};

enum eApplyAngularLimitsIn
{
    EApplyAngularLimitsIn_Disabled = 0,
    EApplyAngularLimitsIn_Itself = 1,
    EApplyAngularLimitsIn_Parent = 2,
    EApplyAngularLimitsIn_Component = 3,
};

class cGcSpringLink
{
public:
    static const unsigned __int64 muNameHash = 0x4B56CD3D914485CF;
    static const unsigned __int64 muTemplateHash = 0x7DA8BF75E7FFBA01;
    static const int miNumMembers = 38;

    bool mbEnabled;
    cTkFixedString<64,char> macName;
    cTkDynamicArray<cTkFixedString<64,char>1> maNodeNames;
    cTkVector3 mCentreOfMassLocal;
    cTkVector3 mPivotLocal;
    ePivotAnchorsTo mePivotAnchorsTo;
    cTkVector3 mPivotAnchorLocal;
    cTkFixedString<64,char> macPivotAnchorNode;
    float mfApplyGameGravity;
    float mfApplyGameWind;
    float mfAirSpeedFromMovementSpeedScale;
    bool mbPositionalSpringEnabled;
    float mfDampingCriticality;
    float mfNaturalFrequency;
    bool mbSpringPivots;
    bool mbApplySpringInMovingFrame;
    eApplyMotionScaleIn meApplyMotionScaleIn;
    float mfMotionScale_Uniform;
    cTkVector3 mMotionScale;
    eApplyMotionLimitsIn meApplyMotionLimitsIn;
    float mfMotionLimit_MaxDetachmentDistance;
    cTkVector3 mMotionLimitMin;
    cTkVector3 mMotionLimitMax;
    cTkVector3 mMotionLimitBounciness;
    bool mbAngularSpringEnabled;
    float mfInfluenceOfTranslation;
    float mfApplyInfluenceOfTranslationInMovingFrame;
    float mfDistanceWhereRotationMatchesLinear;
    float mfAngularDampingCriticality;
    float mfAngularNaturalFrequency;
    float mfApplyAngularSpringInMovingFrame;
    eApplyAngularMotionScaleIn meApplyAngularMotionScaleIn;
    float mfAngularMotionScale_Uniform;
    cTkVector3 mAngularMotionScale;
    eApplyAngularLimitsIn meApplyAngularLimitsIn;
    cTkVector3 mAngularLimitMinDeg;
    cTkVector3 mAngularLimitMaxDeg;
    cTkVector3 mAngularMotionLimitBounciness;

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
