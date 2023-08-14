#pragma once
#include "../../../../../pch.h"

#include "../../../../../metadata/source/metadata/simulation/ecosystem/npcs/gcnpcproptype.meta.h"
#include "../../../../../metadata/source/metadata/simulation/ecosystem/npcs/gcnpcseatedposture.meta.h"
#include "../../../../../metadata/source/metadata/simulation/npcs/gcnpcprobabilityanimationdata.meta.h"
#include "../../../../../metadata/source/metadata/simulation/npcs/gcnpcinteractiveobjectstatetransition.meta.h"

class cGcNPCInteractiveObjectState
{
public:
    static const unsigned __int64 muNameHash = 0x8D18F9F6D2A592B3;
    static const unsigned __int64 muTemplateHash = 0xD19C0E4EBABA1360;
    static const int miNumMembers = 21;

    TkID<128> mName;
    bool mbFaceSpawnDir;
    bool mbFaceNodeDir;
    bool mbFaceInvNodeDir;
    bool mbLookAtModel;
    cTkFixedString<64,char> macLookAtNode;
    bool mbFaceLookAt;
    bool mbMaintainLookAt;
    bool mbPlayIdles;
    bool mbCanConverse;
    cGcNPCPropType mProp;
    cGcNPCSeatedPosture mSeatedPosture;
    float mfBlendTime;
    float mfEarlyOutTime;
    cTkDynamicArray<cGcNPCProbabilityAnimationData> maAnimations;
    float mfSpineAdjustAmount;
    int miMinAnims;
    int miMaxAnims;
    float mfMinTime;
    float mfMaxTime;
    cTkDynamicArray<cGcNPCInteractiveObjectStateTransition> maTransitions;

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
