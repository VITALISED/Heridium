#pragma once
#include "pch.h"

enum eMechMeshPart
{
    EMechMeshPart_Scanner = 0,
    EMechMeshPart_Body = 1,
    EMechMeshPart_Legs = 2,
    EMechMeshPart_LeftArm = 3,
    EMechMeshPart_RightArm = 4,
};

class cGcMechMeshPart
{
public:
    static const unsigned __int64 muNameHash = 0x78242DA1B96F48FC;
    static const unsigned __int64 muTemplateHash = 0x9DE40488BE597ACC;
    static const int miNumMembers = 1;

    eMechMeshPart meMechMeshPart;

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
