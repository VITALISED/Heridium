#pragma once
#include "pch.h"

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
public:
    static const unsigned __int64 muNameHash = 0x80648B8FC1E7CB4D;
    static const unsigned __int64 muTemplateHash = 0x1050DC441F582ECB;
    static const int miNumMembers = 13;

    bool mbEnabled;
    bool mbEnableFootRaycasts;
    cTkDynamicArray<cGcIKConstraint1> maHeadConstraints;
    cTkDynamicArray<cGcIKConstraint1> maLegConstraints;
    cGcIKConstraint mCOGConstraint;
    cTkDynamicArray<cGcIKConstraint1> maRestrictConstraints;
    cTkDynamicArray<cTkFixedString<32,char>1> maHandBones;
    cTkDynamicArray<cTkFixedString<32,char>1> maCameraNeckBones;
    cGcIKConstraint mSitConstraint;
    ePlayerHeadUpAxis mePlayerHeadUpAxis;
    cTkDynamicArray<cGcCreatureIkData1> maJointDataDeprecated;
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
