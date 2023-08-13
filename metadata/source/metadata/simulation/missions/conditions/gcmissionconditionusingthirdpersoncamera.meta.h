#pragma once

#include "../../../../../../../../pch.h"
enum eUsingCameraMode
{
    EUsingCameraMode_OnFoot = 0,
    EUsingCameraMode_Ship = 1,
    EUsingCameraMode_Vehicle = 2,
};

class cGcMissionConditionUsingThirdPersonCamera
{
    static const unsigned __int64 muNameHash = 1830343791426038908;
    static const unsigned __int64 muTemplateHash = 13389665357561725425;
    static const int miNumMembers = 1;

    eUsingCameraMode meUsingCameraMode;

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
