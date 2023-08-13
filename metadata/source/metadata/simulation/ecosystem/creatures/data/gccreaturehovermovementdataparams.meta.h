#pragma once
#include "pch.h"

class cGcCreatureHoverMovementDataParams
{
public:
    static const unsigned __int64 muNameHash = 0x2862D9C79079A037;
    static const unsigned __int64 muTemplateHash = 0x8E185E70D1EAA16D;
    static const int miNumMembers = 19;

    cTkDynamicArray<TkID<256>1> maValidDescriptors;
    float mfNavOffsetY;
    float mfNavOffsetZ;
    float mfGroundHeightOffset;
    cTkFixedString<256,char> macGroundEffect;
    float mfGroundEffectHeightForMaxAlpha;
    float mfGroundEffectHeightForMinAlpha;
    float mfRayCastUp;
    float mfRayCastDown;
    bool mbGroundAlign;
    float mfHeightForMaxGroundAlign;
    float mfHeightForMinGroundAlign;
    float mfGroundAlignTimeModifier;
    bool mbGroundAvoid;
    float mfHeightForMaxGroundAvoid;
    float mfHeightForMinGroundAvoid;
    float mfGroundAvoidTimeModifier;
    bool mbCanJump;
    cTkDynamicArray<cGcCreatureHoverTintableEffect1> maTintableEffects;

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
