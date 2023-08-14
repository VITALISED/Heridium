#pragma once
#include "../../../../../../../pch.h"

enum eUseCorePartsOnly
{
    EUseCorePartsOnly_False = 0,
    EUseCorePartsOnly_True = 1,
    EUseCorePartsOnly_DontCare = 2,
};
#include "../../../../../../../metadata/toolkit/metadata/enginesettings/tkgraphicsdetailtypes.meta.h"

class cGcBaseBuildingSettingsAction
{
public:
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
    static void ClassPointerFix(cTkClassPointer* lPtr, bool lbFixUp, unsigned __int64 liDynamicOffset);
    static unsigned __int64 ClassPointerGenerateHash(const cTkClassPointer* lPtr, unsigned __int64 luHash, bool lbDeep);
    static void ClassPointerRead(cTkClassPointer* lPtr, XMLNode* lDataNode, cTkLinearMemoryPool* lpAllocator);
    static bool ClassPointerSave(const cTkClassPointer* lPtr, const char* lpacFilename);
    static void ClassPointerWrite(const cTkClassPointer* lPtr, XMLNode* lDataNode, bool lbForceShortForm);
};
