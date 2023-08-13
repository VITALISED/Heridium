#pragma once
#include "pch.h"

class cGcNPCAnimationSetData;
class cGcNPCAnimationSetData;
class cGcNPCAnimationSetData;
class cGcNPCAnimationSetData;

class cGcNPCAnimationsData
{
public:
    static const unsigned __int64 muNameHash = 0x5344C3D579450D7B;
    static const unsigned __int64 muTemplateHash = 0x5316AB210357681B;
    static const int miNumMembers = 4;

    cGcNPCAnimationSetData mStandingAnimatons;
    cGcNPCAnimationSetData mStandingIPadAnimatons;
    cGcNPCAnimationSetData mSittingAnimatons;
    cGcNPCAnimationSetData mSittingIPadAnimatons;

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
