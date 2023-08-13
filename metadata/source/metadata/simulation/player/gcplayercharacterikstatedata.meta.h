#pragma once
#include "../../../../../../../pch.h"

class cGcPlayerCharacterStateType;
class cGcPlayerCharacterIKOverrideData;

class cGcPlayerCharacterIKStateData
{
    static const unsigned __int64 muNameHash = 0x4D3FB3BF1BEB7DAE;
    static const unsigned __int64 muTemplateHash = 0x42ECAED236415D8B;
    static const int miNumMembers = 3;

    cGcPlayerCharacterStateType mState;
    cGcPlayerCharacterIKOverrideData mData;
    cTkDynamicArray<cGcPlayerCharacterAnimationOverrideData> maAnimOverrides;

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
