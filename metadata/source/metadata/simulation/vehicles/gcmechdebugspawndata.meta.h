#pragma once
#include "../../../../../../../pch.h"

class cGcCharacterCustomisationSaveData;

class cGcMechDebugSpawnData
{
    static const unsigned __int64 muNameHash = 0xCD20631E8DC06987;
    static const unsigned __int64 muTemplateHash = 0xD488D7A5FF6D3F2D;
    static const int miNumMembers = 9;

    cTkVector mPosition;
    cTkVector mFacing;
    cTkVector mUp;
    cTkVector mDestination;
    bool mbRunning;
    float mfTitanFallDelay;
    float mfMoveDelay;
    bool mbUseCustomisation;
    cGcCharacterCustomisationSaveData mCustomisatonData;

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
