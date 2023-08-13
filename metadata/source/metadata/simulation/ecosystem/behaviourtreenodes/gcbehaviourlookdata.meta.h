#pragma once
#include "pch.h"

class cTkBlackboardDefaultValueBool;
class cTkBlackboardDefaultValueBool;
class cTkBlackboardDefaultValueBool;

class cGcBehaviourLookData
{
public:
    static const unsigned __int64 muNameHash = 0x79CECC228E0EBC79;
    static const unsigned __int64 muTemplateHash = 0xF530CA0023DD90CA;
    static const int miNumMembers = 5;

    TkID<128> mLookTargetKey;
    bool mbLookWhenBeyondMaxAngle;
    cTkBlackboardDefaultValueBool mFocusOnTarget;
    cTkBlackboardDefaultValueBool mRelaxedLook;
    cTkBlackboardDefaultValueBool mCanLook;

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
