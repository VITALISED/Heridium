#pragma once
#include "../../../../../../../pch.h"

enum eMoveMode
{
    EMoveMode_Roll = 0,
    EMoveMode_Float = 1,
    EMoveMode_Drill = 2,
};

class cGcCreatureWeirdMovementData
{
public:
    static const unsigned __int64 muNameHash = 0xBE42E310FC94C8E3;
    static const unsigned __int64 muTemplateHash = 0xE92FCC2DF81C6C7D;
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
