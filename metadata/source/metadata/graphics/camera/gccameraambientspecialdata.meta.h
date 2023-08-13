#pragma once
#include "../../../../../../../pch.h"

enum eCameraOrigin
{
    ECameraOrigin_ExternalBase = 0,
};

class cGcCameraAmbientSpecialData
{
    static const unsigned __int64 muNameHash = 0xC266DA7C9BDD51E7;
    static const unsigned __int64 muTemplateHash = 0x54091498A2F3C101;
    static const int miNumMembers = 5;

    TkID<128> mAnimation;
    TkID<128> mDroneAnimation;
    eCameraOrigin meCameraOrigin;
    bool mbUseLookAt;
    bool mbAvoidTerrain;

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
