#pragma once
#include "pch.h"

class cGcConstraintsToCreateSpec
{
public:
    static const unsigned __int64 muNameHash = 0x6C0B3270B9591BB1;
    static const unsigned __int64 muTemplateHash = 0x2796FFF182A8F194;
    static const int miNumMembers = 20;

    bool mbHorizontal_1x0;
    float mfPushingStrength_Horizontal_1x0;
    bool mbVertical_1x0;
    float mfPushingStrength_Vertical_1x0;
    bool mbDiagonal_1x1_0011;
    float mfPushingStrength_Diagonal_1x1_0011;
    bool mbDiagonal_1x1_0110;
    float mfPushingStrength_Diagonal_1x1_0110;
    bool mbHorizontal_2x0;
    float mfPushingStrength_Horizontal_2x0;
    bool mbVertical_2x0;
    float mfPushingStrength_Vertical_2x0;
    bool mbSkewedDiagonal_2x1_0021;
    float mfPushingStrength_SkewedDiagonal_2x1_0021;
    bool mbSkewedDiagonal_2x1_2001;
    float mfPushingStrength_SkewedDiagonal_2x1_2001;
    bool mbSkewedDiagonal_2x1_1002;
    float mfPushingStrength_SkewedDiagonal_2x1_1002;
    bool mbSkewedDiagonal_2x1_0012;
    float mfPushingStrength_SkewedDiagonal_2x1_0012;

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
