#pragma once
#include "pch.h"

enum eZoomType
{
    EZoomType_None = 0,
    EZoomType_Far = 1,
    EZoomType_Mid = 2,
    EZoomType_Close = 3,
};

class cGcZoomData
{
public:
    static const unsigned __int64 muNameHash = 0x2E92A561CA97070C;
    static const unsigned __int64 muTemplateHash = 0x94899B4FFFB85110;
    static const int miNumMembers = 7;

    eZoomType meZoomType;
    float mfEffectStrength;
    float mfMoveSpeed;
    float mfFoV;
    float mfMinScanDistance;
    float mfMaxScanDistance;
    float mfWalkSpeed;

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
