#pragma once
#include "../../../../../../pch.h"

#include "../../../../../../metadata/source/metadata/ik/gcikconstraint.meta.h"

enum ePlayerHeadUpAxis
{
    EPlayerHeadUpAxis_X = 0,
    EPlayerHeadUpAxis_XNeg = 1,
    EPlayerHeadUpAxis_Y = 2,
    EPlayerHeadUpAxis_YNeg = 3,
    EPlayerHeadUpAxis_Z = 4,
    EPlayerHeadUpAxis_ZNeg = 5,
};
#include "../../../../../../metadata/source/metadata/simulation/ecosystem/gccreatureikdata.meta.h"
#include "../../../../../../metadata/source/metadata/simulation/character/gccharacterlookatdata.meta.h"

class cGcPlayerFullBodyIKComponentData
{
public:
    static const unsigned __int64 muNameHash = 0x80648B8FC1E7CB4D;
    static const unsigned __int64 muTemplateHash = 0x1050DC441F582ECB;
    static const int miNumMembers = 13;

    bool mbEnabled;
    bool mbEnableFootRaycasts;
    cTkDynamicArray<cGcIKConstraint> maHeadConstraints;
    cTkDynamicArray<cGcIKConstraint> maLegConstraints;
    cGcIKConstraint mCOGConstraint;
    cTkDynamicArray<cGcIKConstraint> maRestrictConstraints;
    cTkDynamicArray<cTkFixedString<32,char> > maHandBones;
    cTkDynamicArray<cTkFixedString<32,char> > maCameraNeckBones;
    cGcIKConstraint mSitConstraint;
    ePlayerHeadUpAxis mePlayerHeadUpAxis;
    cTkDynamicArray<cGcCreatureIkData> maJointDataDeprecated;
    bool mbUseFootGlue;
    cGcCharacterLookAtData mLookAtSettings;

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
