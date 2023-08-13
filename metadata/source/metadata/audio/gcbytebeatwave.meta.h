#pragma once

#include "../../../../../../pch.h"
enum eByteBeatWave
{
    EByteBeatWave_SawTooth = 0,
    EByteBeatWave_Sine = 1,
    EByteBeatWave_Square = 2,
    EByteBeatWave_Triangle = 3,
};

class cGcByteBeatWave
{
    static const unsigned __int64 muNameHash = 10980056838966131923;
    static const unsigned __int64 muTemplateHash = 14539730955819277165;
    static const int miNumMembers = 1;

    eByteBeatWave meByteBeatWave;

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
