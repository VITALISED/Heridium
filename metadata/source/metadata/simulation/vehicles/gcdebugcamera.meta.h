#pragma once
#include "../../../../../../../pch.h"

class cGcDebugCamera
{
    static const unsigned __int64 muNameHash = 0xC7724B26F8E50BC5;
    static const unsigned __int64 muTemplateHash = 0x4115B5E6806757B5;
    static const int miNumMembers = 5;

    float mfBaseSpeed;
    float mfSmoothing;
    cTkDynamicArray<cGcDebugCameraEntry> maWaypoints;
    int miCurrentWaypoint;
    float mfCurrentWaypointProgress;

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
