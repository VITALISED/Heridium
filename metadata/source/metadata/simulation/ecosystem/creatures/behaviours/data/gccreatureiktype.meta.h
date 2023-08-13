#pragma once

#include "../../../../../../../../../../pch.h"
enum eCreatureIkType
{
    ECreatureIkType_Foot = 0,
    ECreatureIkType_Hinge_X = 1,
    ECreatureIkType_Hinge_Y = 2,
    ECreatureIkType_Hinge_Z = 3,
    ECreatureIkType_Locked = 4,
    ECreatureIkType_Head = 5,
    ECreatureIkType_Toe = 6,
    ECreatureIkType_SpaceshipFoot = 7,
    ECreatureIkType_SpaceshipToe = 8,
};

class cGcCreatureIkType
{
    static const unsigned __int64 muNameHash = 1899545898014998727;
    static const unsigned __int64 muTemplateHash = 4788605407137940538;
    static const int miNumMembers = 1;

    eCreatureIkType meCreatureIkType;

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
