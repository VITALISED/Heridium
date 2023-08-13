#pragma once

#include "../../../../../../../pch.h"
enum eMatchNodeType
{
    EMatchNodeType_Any = 0,
    EMatchNodeType_Mesh = 1,
    EMatchNodeType_Model = 2,
    EMatchNodeType_Joint = 3,
};

enum eMatchName
{
    EMatchName_ContainsString = 0,
    EMatchName_ExactString = 1,
};

enum eExplodeAction
{
    EExplodeAction_RelativeToParent = 0,
    EExplodeAction_DontMove = 1,
    EExplodeAction_SaveCenter = 2,
    EExplodeAction_RelativeToSaved = 3,
};

class cGcModelExplosionRule
{
    static const unsigned __int64 muNameHash = 11978753941065398023;
    static const unsigned __int64 muTemplateHash = 17740438358773636970;
    static const int miNumMembers = 7;

    eMatchNodeType meMatchNodeType;
    eMatchName meMatchName;
    cTkFixedString<32,char> macString;
    eExplodeAction meExplodeAction;
    cTkVector mAxisMultiplier;
    cTkVector mOffset;
    float mfExplodeMod;

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
