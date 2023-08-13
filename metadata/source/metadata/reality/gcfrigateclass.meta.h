#pragma once

#include "../../../../../../pch.h"
enum eFrigateClass
{
    EFrigateClass_Combat = 0,
    EFrigateClass_Exploration = 1,
    EFrigateClass_Mining = 2,
    EFrigateClass_Diplomacy = 3,
    EFrigateClass_Support = 4,
    EFrigateClass_Normandy = 5,
    EFrigateClass_DeepSpace = 6,
    EFrigateClass_DeepSpaceCommon = 7,
};

class cGcFrigateClass
{
    static const unsigned __int64 muNameHash = 11801804073985428071;
    static const unsigned __int64 muTemplateHash = 15563479437580306442;
    static const int miNumMembers = 1;

    eFrigateClass meFrigateClass;

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
