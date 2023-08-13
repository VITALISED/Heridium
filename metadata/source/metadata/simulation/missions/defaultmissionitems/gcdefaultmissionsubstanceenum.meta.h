#pragma once
#include "pch.h"

enum eDefaultSubstanceType
{
    EDefaultSubstanceType_None = 0,
    EDefaultSubstanceType_PrimarySubstance = 1,
    EDefaultSubstanceType_SecondarySubstance = 2,
};

class cGcDefaultMissionSubstanceEnum
{
public:
    static const unsigned __int64 muNameHash = 0x1BAC8ECF2C7CC8FC;
    static const unsigned __int64 muTemplateHash = 0xB51C8F9B01D93DC9;
    static const int miNumMembers = 1;

    eDefaultSubstanceType meDefaultSubstanceType;

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
