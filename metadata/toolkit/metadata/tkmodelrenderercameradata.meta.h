#pragma once

#include "../../../../../pch.h"
class cTkCameraWanderData;

class cTkModelRendererCameraData
{
    static const unsigned __int64 muNameHash = 16336953942099070836;
    static const unsigned __int64 muTemplateHash = 6028644359519035039;
    static const int miNumMembers = 8;

    float mfDistance;
    cTkVector mOffset;
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
    static void ClassPointerValidateData(cTkClassPointer* lPtr);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static void ClassPointerRender(cTkClassPointer* lPtr);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
