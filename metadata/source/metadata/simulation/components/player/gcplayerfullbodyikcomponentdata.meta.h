#pragma once

#include "../../../../../../../../pch.h"
class cGcIKConstraint;
class cGcIKConstraint;

enum ePlayerHeadUpAxis
{
    EPlayerHeadUpAxis_X = 0,
    EPlayerHeadUpAxis_XNeg = 1,
    EPlayerHeadUpAxis_Y = 2,
    EPlayerHeadUpAxis_YNeg = 3,
    EPlayerHeadUpAxis_Z = 4,
    EPlayerHeadUpAxis_ZNeg = 5,
};
class cGcCharacterLookAtData;

class cGcPlayerFullBodyIKComponentData
{
    static const unsigned __int64 muNameHash = 9251672984075619149;
    static const unsigned __int64 muTemplateHash = 1175681687885459147;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};