#pragma once

#include "../../../../../../../../../pch.h"
enum eMoveMode
{
    EMoveMode_Roll = 0,
    EMoveMode_Float = 1,
    EMoveMode_Drill = 2,
};

class cGcCreatureWeirdMovementData
{
    static const unsigned __int64 muNameHash = 13709769877765802211;
    static const unsigned __int64 muTemplateHash = 16802873232550816893;
    static const int miNumMembers = 7;

    eMoveMode meMoveMode;
    cTkFixedString<256,char> macNode;
    float mfBobSpeed;
    float mfBobAmount;
    float mfSpinSpeed;
    float mfJumpAngle;
    cTkDynamicArray<cTkFixedString<256,char> > maFeetNames;

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