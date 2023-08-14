#pragma once
#include "../../../../pch.h"

enum eWonderWeirdBasePartCategory
{
    EWonderWeirdBasePartCategory_EngineOrb = 0,
    EWonderWeirdBasePartCategory_BeamStone = 1,
    EWonderWeirdBasePartCategory_BubbleCluster = 2,
    EWonderWeirdBasePartCategory_MedGeometric = 3,
    EWonderWeirdBasePartCategory_Shard = 4,
    EWonderWeirdBasePartCategory_StarJoint = 5,
    EWonderWeirdBasePartCategory_BoneGarden = 6,
    EWonderWeirdBasePartCategory_ContourPod = 7,
    EWonderWeirdBasePartCategory_HydroPod = 8,
    EWonderWeirdBasePartCategory_ShellWhite = 9,
    EWonderWeirdBasePartCategory_WeirdCube = 10,
};

class cGcWonderWeirdBasePartCategory
{
public:
    static const unsigned __int64 muNameHash = 0xBF7B60D4CA07A9C0;
    static const unsigned __int64 muTemplateHash = 0xC4FD35234E48565C;
    static const int miNumMembers = 1;

    eWonderWeirdBasePartCategory meWonderWeirdBasePartCategory;

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
