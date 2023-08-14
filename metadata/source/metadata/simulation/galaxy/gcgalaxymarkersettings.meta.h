#pragma once
#include "../../../../../pch.h"

class cGcGalaxyMarkerSettings
{
public:
    static const unsigned __int64 muNameHash = 0xB24FD22ADB1D885D;
    static const unsigned __int64 muTemplateHash = 0x9D337FA7A210A1B8;
    static const int miNumMembers = 16;

    cTkFixedArray<cTkColour, 3> maColours;
    cTkColour mOutlineColour;
    float mfOutlineWidth;
    int miEdgeCount;
    float mfRotationBase;
    float mfLineWidth;
    float mfLineWidthFade;
    float mfSizeScale;
    float mfRadiusFixed;
    float mfRadiusMinimum;
    float mfRadiusBaseOffset;
    float mfRadiusEdge;
    cTkFixedString<128,char> macIcon;
    cTkVector2 mIconSize;
    cTkFixedString<32,char> macMarkerLabel;
    cTkVector2 mTimeScaleRange;

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
