#pragma once
#include "../../../pch.h"

#include "../../../metadata/toolkit/metadata/tkcamerawanderdata.meta.h"

class cTkModelRendererCameraData
{
public:
    static const unsigned __int64 muNameHash = 0xE2B8850DAEBB8F74;
    static const unsigned __int64 muTemplateHash = 0x53AA0C1A964B5E9F;
    static const int miNumMembers = 8;

    float mfDistance;
    cTkVector3 mOffset;
    float mfRoll;
    float mfPitch;
    float mfRotate;
    float mfLightPitch;
    float mfLightRotate;
    cTkCameraWanderData mWander;

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
