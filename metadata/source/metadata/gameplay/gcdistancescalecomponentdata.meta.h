#pragma once
#include "pch.h"

class cGcDistanceScaleComponentData
{
public:
    static const unsigned __int64 muNameHash = 0xB150A87B0DD42807;
    static const unsigned __int64 muTemplateHash = 0xEE335C704F87FFA8;
    static const int miNumMembers = 7;

    bool mbUseGlobals;
    float mfScale;
    float mfMinDistance;
    float mfMaxDistance;
    float mfMinHeight;
    float mfMaxHeight;
    bool mbDisabledWhenOnFreighter;

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
