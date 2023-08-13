#pragma once
#include "../../../../../../../../../pch.h"

enum eUseCorePartsOnly
{
    EUseCorePartsOnly_False = 0,
    EUseCorePartsOnly_True = 1,
    EUseCorePartsOnly_DontCare = 2,
};
class cTkGraphicsDetailTypes;

class cGcBaseBuildingSettingsAction
{
    static const unsigned __int64 muNameHash = 0x1250AC356CE3B7B;
    static const unsigned __int64 muTemplateHash = 0xB7932103D79C6EBB;
    static const int miNumMembers = 2;

    eUseCorePartsOnly meUseCorePartsOnly;
    cTkGraphicsDetailTypes mMaxAffectedDetail;

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
