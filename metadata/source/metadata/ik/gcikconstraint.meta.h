#pragma once
#include "../../../../../../pch.h"

class cGcCreatureIkType;
class cGcPlayerCharacterIKOverrideData;

class cGcIKConstraint
{
    static const unsigned __int64 muNameHash = 0x9A9B4993026AA411;
    static const unsigned __int64 muTemplateHash = 0x6D52BE7161729552;
    static const int miNumMembers = 5;

    TkID<128> mId;
    cTkFixedString<256,char> macJointName;
    cGcCreatureIkType mType;
    cGcPlayerCharacterIKOverrideData mDefaultState;
    cTkDynamicArray<cGcPlayerCharacterIKStateData> maStates;

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
