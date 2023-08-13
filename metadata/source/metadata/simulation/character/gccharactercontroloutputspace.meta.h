#pragma once

#include "../../../../../../../pch.h"
enum eCharacterControlOutputSpace
{
    ECharacterControlOutputSpace_CameraRelative = 0,
    ECharacterControlOutputSpace_CameraRelativeTopDown = 1,
    ECharacterControlOutputSpace_Raw = 2,
};

class cGcCharacterControlOutputSpace
{
    static const unsigned __int64 muNameHash = 1728743059978475163;
    static const unsigned __int64 muTemplateHash = 18123010633083589414;
    static const int miNumMembers = 1;

    eCharacterControlOutputSpace meCharacterControlOutputSpace;

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
