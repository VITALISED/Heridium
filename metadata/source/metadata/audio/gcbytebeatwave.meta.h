#pragma once
#include "../../../../pch.h"

enum eByteBeatWave
{
    EByteBeatWave_SawTooth = 0,
    EByteBeatWave_Sine = 1,
    EByteBeatWave_Square = 2,
    EByteBeatWave_Triangle = 3,
};

class cGcByteBeatWave
{
public:
    static const unsigned __int64 muNameHash = 0x9860FF852C2CBCD3;
    static const unsigned __int64 muTemplateHash = 0xC9C78044FF5BDB6D;
    static const int miNumMembers = 1;

    eByteBeatWave meByteBeatWave;

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
