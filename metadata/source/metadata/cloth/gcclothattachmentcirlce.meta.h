#pragma once
#include "../../../../pch.h"

#include "../../../../metadata/source/metadata/cloth/axisspecification.meta.h"

class cGcClothAttachmentCirlce
{
public:
    static const unsigned __int64 muNameHash = 0xE5DC8328938D3562;
    static const unsigned __int64 muTemplateHash = 0x22A3925ECEBE9AB2;
    static const int miNumMembers = 19;

    bool mbEnabled;
    cTkFixedString<64,char> macDebugName;
    cTkFixedString<64,char> macBoneName;
    float mfRadius;
    cTkVector3 mCenter;
    cAxisSpecification mRightAxis;
    cAxisSpecification mForwardAxis;
    cAxisSpecification mClothDirection;
    float mfStartAngle;
    float mfEndAngle;
    bool mbWrapIAround;
    bool mbWrapJAround;
    int miNumRowsOfSameJToFix;
    int miRowToFixJ;
    float mfAttractionStrength;
    float mfAttractionStartDistance;
    float mfStartIFraction;
    float mfEndIFraction;
    float mfJStepDistanceOverride;

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
