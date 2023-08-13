#pragma once

#include "../../../../../../pch.h"
enum eBlockPlayerWeapon
{
    EBlockPlayerWeapon_Unblocked = 0,
    EBlockPlayerWeapon_Sheathed = 1,
    EBlockPlayerWeapon_OutButCannotFire = 2,
};

class cTkAnimationGameData
{
    static const unsigned __int64 muNameHash = 5530468008582014973;
    static const unsigned __int64 muTemplateHash = 3110491261829621341;
    static const int miNumMembers = 3;

    bool mbRootMotionEnabled;
    bool mbBlockPlayerMovement;
    eBlockPlayerWeapon meBlockPlayerWeapon;

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