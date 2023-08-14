#pragma once
#include "../../../../pch.h"

enum eScaleInTransformApplicationOnCloth
{
    EScaleInTransformApplicationOnCloth_Multiply = 0,
    EScaleInTransformApplicationOnCloth_Divide = 1,
    EScaleInTransformApplicationOnCloth_Ignore = 2,
};

enum eScaleInTransformApplicationOnCollision
{
    EScaleInTransformApplicationOnCollision_Multiply = 0,
    EScaleInTransformApplicationOnCollision_Divide = 1,
    EScaleInTransformApplicationOnCollision_Ignore = 2,
};

enum eScaleInTransformApplicationOnAttachment
{
    EScaleInTransformApplicationOnAttachment_Multiply = 0,
    EScaleInTransformApplicationOnAttachment_Divide = 1,
    EScaleInTransformApplicationOnAttachment_Ignore = 2,
};

enum eInitialShapeSource
{
    EInitialShapeSource_Rectangular = 0,
    EInitialShapeSource_TakenFromRenderMesh = 1,
    EInitialShapeSource_Saved = 2,
};
#include "../../../../metadata/source/metadata/cloth/gcrectangularinitialshape.meta.h"
#include "../../../../metadata/source/metadata/cloth/gcclothcollisionbone.meta.h"
#include "../../../../metadata/source/metadata/cloth/gcclothattachmentcirlce.meta.h"
#include "../../../../metadata/source/metadata/cloth/gcclothattachmentline.meta.h"
#include "../../../../metadata/source/metadata/cloth/gcattachmentpointset.meta.h"
#include "../../../../metadata/source/metadata/cloth/gcconstraintstocreatespec.meta.h"
#include "../../../../metadata/source/metadata/cloth/gcadvancedtweaks.meta.h"
#include "../../../../metadata/source/metadata/cloth/gcattachednode.meta.h"

class cGcClothPiece
{
public:
    static const unsigned __int64 muNameHash = 0x7596FBA2C232AC37;
    static const unsigned __int64 muTemplateHash = 0xABA3C17DBE6EBD46;
    static const int miNumMembers = 40;

    bool mbEnabled;
    cTkFixedString<64,char> macDebugName;
    cTkFixedString<64,char> macRenderMeshNodeName;
    int miNumPointsInRenderMeshI;
    int miNumPointsInRenderMeshJ;
    int miVertexRemappingPermutation;
    int miNumSimPointsI;
    int miNumSimPointsJ;
    float mfClothHeight;
    float mfParticleRadius;
    float mfStaticFriction;
    float mfDampingWrtFixed;
    float mfAbsoluteDamping;
    float mfApplyGameWind;
    float mfAirSpeedFromMovementSpeedScale;
    float mfAirSpeedOverallEffect;
    float mfStandardGravityScale;
    cTkFixedString<64,char> macInitialShapeReferenceBone;
    eScaleInTransformApplicationOnCloth meScaleInTransformApplicationOnCloth;
    eScaleInTransformApplicationOnCollision meScaleInTransformApplicationOnCollision;
    eScaleInTransformApplicationOnAttachment meScaleInTransformApplicationOnAttachment;
    eInitialShapeSource meInitialShapeSource;
    cGcRectangularInitialShape mRectangularInitialShape;
    cTkDynamicArray<cTkVector3> maInitialShapePoints;
    cTkDynamicArray<cGcClothCollisionBone> maCollisionBones;
    cTkDynamicArray<cGcClothAttachmentCirlce> maAttachmentCircles;
    cTkDynamicArray<cGcClothAttachmentLine> maAttachmentLines;
    cTkDynamicArray<cGcAttachmentPointSet> maAttachmentPointSets;
    cGcConstraintsToCreateSpec mConstraintsToCreate;
    cTkDynamicArray<cTkFixedString<64,char> > maNodesThatMustBePresent;
    cTkDynamicArray<cTkFixedString<64,char> > maNodesToHide;
    cGcAdvancedTweaks mAdvanced;
    bool mbVertexBasedClothRenderingEnabled;
    bool mbAttachedNodesEnabled;
    cTkDynamicArray<cGcAttachedNode> maAttachedNodes;
    float mfAttachedNodesOverallBlendStrength;
    cTkDynamicArray<int> maDeletedSimPoints;
    cTkDynamicArray<int> maDeletedConstraintsI;
    cTkDynamicArray<int> maDeletedConstraintsJ;
    bool mbLeaveRenderedTrianglesUnaffected;

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
