#pragma once

#include "../../../../../../../pch.h"
enum eOnComplete
{
    EOnComplete_Hold = 0,
    EOnComplete_Loop = 1,
    EOnComplete_Destroy = 2,
};

class cGcCreatureDebugSpawnData
{
    static const unsigned __int64 muNameHash = 6455290195244181144;
    static const unsigned __int64 muTemplateHash = 5189279458959126901;
    static const int miNumMembers = 9;

    int miCreatureIndex;
    float mfInitialDelay;
    cTkDynamicArray<cGcCreatureDebugWaypoint> maWaypoints;
    eOnComplete meOnComplete;
    float mfSmoothTime;
    int miCurrentWaypoint;
    bool mbArrivedAtCurrentWaypoint;
    float mfTimer;
    float mfSmoothTimer;

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
