#pragma once
#include "pch.h"

class cGcCustomisationCameraData
{
public:
    static const unsigned __int64 muNameHash = 0x50A80E365BD08E24;
    static const unsigned __int64 muTemplateHash = 0xE1F0EFF18817E2E8;
    static const int miNumMembers = 6;

    int miInteractionCameraIndex;
    cTkFixedString<32,char> macInteracttionCameraFocusJoint;
    float mfMinPitch;
    float mfMaxPitch;
    float mfMinYaw;
    float mfMaxYaw;

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
