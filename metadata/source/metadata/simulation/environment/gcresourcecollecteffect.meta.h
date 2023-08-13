#pragma once

#include "../../../../../../../pch.h"
class cGcResourceCollectEffect
{
    static const unsigned __int64 muNameHash = 14812211627375035242;
    static const unsigned __int64 muTemplateHash = 10459568105384814743;
    static const int miNumMembers = 13;

    float mfPlayerOffset;
    float mfSizeMin;
    float mfSizeMax;
    float mfRotateMin;
    float mfRotateMax;
    float mfStartOffsetMin;
    float mfStartOffsetMax;
    float mfTimeMin;
    float mfTimeMax;
    float mfStartSpeedMin;
    float mfStartSpeedMax;
    float mfOffsetMin;
    float mfOffsetMax;

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
