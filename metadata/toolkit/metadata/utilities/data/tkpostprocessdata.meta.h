#pragma once
#include "../../../../../pch.h"

class cTkPostProcessData
{
public:
    static const unsigned __int64 muNameHash = 0xF95FF845E00A143C;
    static const unsigned __int64 muTemplateHash = 0xAEB5B93A395579A3;
    static const int miNumMembers = 10;

    float mfDOFNearPlane;
    float mfDOFFarPlane;
    float mfDOFNearAmount;
    float mfDOFFarAmount;
    float mfSaturationDepth;
    float mfBrightnessDepth;
    float mfContrastDepth;
    float mfSaturationFinal;
    float mfBrightnessFinal;
    float mfContrastFinal;

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
