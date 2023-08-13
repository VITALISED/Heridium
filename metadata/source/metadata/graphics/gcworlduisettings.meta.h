#pragma once

#include "../../../../../../pch.h"
class cGcWorldUISettings
{
    static const unsigned __int64 muNameHash = 1730933120225272942;
    static const unsigned __int64 muTemplateHash = 5265795722238888943;
    static const int miNumMembers = 20;

    float mfUIWorldQuadOffset;
    float mfUIWorldQuadOffsetV2;
    float mfUIWorldQuadOffsetBuildMenu;
    float mfUIWorldQuadOffsetBuildMenuV2;
    float mfUIWorldQuadSideOffset;
    float mfUIWorldQuadShipAddOffset;
    float mfUIWorldQuadShipAddOffsetV2;
    float mfUIWorldQuadScale;
    float mfUIWorldQuadShipScale;
    float mfHUDDefWorldQuadOffset;
    float mfHUDDefWorldQuadOffsetV2;
    float mfHUDDefWorldQuadShipAddOffset;
    float mfHUDDefWorldQuadShipAddOffsetV2;
    float mfHUDWorldQuadScale;
    float mfHUDWorldQuadShipScale;
    float mfHUDInterpSpeed;
    float mfHUDThresholdVert;
    float mfHUDThresholdHorz;
    float mfGameModeSelectorQuadOffset;
    float mfGameModeSelectorQuadOffsetV2;

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
