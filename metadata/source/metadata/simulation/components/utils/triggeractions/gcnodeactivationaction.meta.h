#pragma once

#include "../../../../../../../../../pch.h"
enum eNodeActiveState
{
    ENodeActiveState_Activate = 0,
    ENodeActiveState_Deactivate = 1,
    ENodeActiveState_Toggle = 2,
    ENodeActiveState_Add = 3,
    ENodeActiveState_Remove = 4,
    ENodeActiveState_RemoveChildren = 5,
};

class cGcNodeActivationAction
{
    static const unsigned __int64 muNameHash = 12881967980873860922;
    static const unsigned __int64 muTemplateHash = 10383699306417190991;
    static const int miNumMembers = 10;

    eNodeActiveState meNodeActiveState;
    cTkFixedString<128,char> macName;
    cTkFixedString<128,char> macSceneToAdd;
    bool mbIncludePhysics;
    bool mbIncludeChildPhysics;
    bool mbNotifyNPC;
    bool mbUseMasterModel;
    bool mbUseLocalNode;
    bool mbRestartEmitters;
    bool mbAffectModels;

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
