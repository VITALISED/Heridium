#pragma once
#include "../../../../../pch.h"

class cTkJointMirrorAxis
{
public:
    static const unsigned __int64 muNameHash = 0xC37B87DF4F026633;
    static const unsigned __int64 muTemplateHash = 0x68E1534AA565849E;
    static const int miNumMembers = 11;

    float mfTransMirrorAxisX;
    float mfTransMirrorAxisY;
    float mfTransMirrorAxisZ;
    float mfRotAdjustX;
    float mfRotAdjustY;
    float mfRotAdjustZ;
    float mfRotAdjustW;
    float mfRotMirrorAxisX;
    float mfRotMirrorAxisY;
    float mfRotMirrorAxisZ;
    int miMirrorAxisMode;

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
